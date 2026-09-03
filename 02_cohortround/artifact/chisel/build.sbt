// Three ways to run this suite: plain `sbt test` now defaults to
// excluding anything tagged SlowTest (see TestTags.scala), for fast
// iteration without needing to remember a separate command; `sbt
// quickTest` is identical and kept as an explicit alias; `sbt longTest`
// runs everything, including the multi-minute TwoFftFrontendHwSpec,
// FrontendScalingSpec's 11 sizes, and ParallelFFTEngineSpec. Plain
// ScalaTest tag-exclusion syntax (`-l <tagName>` passed to the Runner
// after `--`) -- stable, long-established API predating the Chisel 7 /
// ChiselSim migration entirely, chosen deliberately as the lowest-risk
// mechanism for this split.
//
// Deliberately NOT done via `Test / testOptions += Tests.Argument(...,
// "-l", "SlowTest")`, the more commonly-seen sbt setting for this: that
// setting applies to EVERY test-running task under the Test
// configuration, including `testOnly <SpecificSpec>` -- which would
// silently exclude a SlowTest-tagged spec even when explicitly named,
// breaking the exact workflow used throughout this project's own
// history (e.g. `sbt "testOnly ParallelFFTEngineSpec"` to run one slow
// test in isolation). Overriding the `test` command alias directly
// instead affects only the bare, unqualified `sbt test` invocation.
// `longTest` is defined independently via `testOnly *` (not by
// referencing `test`), to avoid any ambiguity between the alias defined
// here and sbt's own built-in task of the same name.
//
// NOT YET CONFIRMED: whether addCommandAlias successfully overrides
// sbt's own built-in `test` command name in practice (this matches a
// known, documented sbt idiom -- e.g. many projects redefine `test` to
// run other checks first -- but has not been verified against this
// specific project's own build). If plain `sbt test` does not actually
// exclude SlowTest after this change, `quickTest` and `longTest` remain
// available regardless as an unambiguous fallback.
addCommandAlias("quickTest", "testOnly * -- -l SlowTest")
addCommandAlias("longTest", "testOnly *")
addCommandAlias("test", "testOnly * -- -l SlowTest")

// Chisel 7.14 resolves scala-library 2.13.18; using an older compiler is
// rejected by SIP-51's backwards-only binary-compatibility check.
ThisBuild / scalaVersion     := "2.13.18"
ThisBuild / version          := "0.1.0"
ThisBuild / organization     := "example"

// Upgraded from Chisel 6.6.0 + the external, now-archived "edu.berkeley.cs"
// chiseltest library to Chisel 7.14.0's own bundled ChiselTest
// compatibility layer (chiseltest._, now part of Chisel itself). This is
// specifically to fix the Verilator 5.x incompatibility found when using
// the old chiseltest's Verilator backend: chiseltest's own README states
// it never supported anything past Verilator v4.202, and it is now
// permanently archived/unmaintained, so that will never change. Chisel's
// own migration guide confirms why: "Use of ChiselTest with Chisel 6 or
// later will prevent the usage of new Chisel 6 features. It is not
// expected that new versions of Chisel will be compatible with the SFC
// [the old compiler chiseltest depends on]." ChiselSim (which the
// bundled chiseltest._ compatibility layer sits on top of) is maintained
// by the core Chisel team and targets Verilator directly via svsim,
// which should track current Verilator releases going forward, unlike
// the frozen, archived original.
//
// NOT YET CONFIRMED (this project's own build has not been run against
// this configuration): whether the ~30 existing main-source .scala files
// compile cleanly under a Chisel 6->7 major version bump (there may be
// unrelated breaking changes beyond the testing library), whether the
// bundled chiseltest._ compatibility layer covers every API this
// project's existing test files use (e.g. .setTimeout(0), used
// extensively for long-running tests -- the migration guide does not
// mention this specifically), and whether Verilator 5.050 actually works
// under ChiselSim's svsim backend in practice. Compile first, then try
// one small, fast test, before assuming the rest of the suite works.
val chiselVersion = "7.14.0"

lazy val root = (project in file("."))
  .settings(
    name := "digit-serial-mac",
    libraryDependencies ++= Seq(
      "org.chipsalliance" %% "chisel"     % chiselVersion,
      // NOTE, fixed after a real compile failure ("object scalatest is
      // not a member of package org"): the old, removed
      // "edu.berkeley.cs" %% "chiseltest" dependency was ALSO
      // transitively pulling in ScalaTest itself (org.scalatest.*,
      // used directly by every *Spec.scala file in this project --
      // AnyFlatSpec, Matchers, "behavior of", "it should"). Removing
      // chiseltest silently removed that transitive dependency too.
      // ScalaTest's own public API used here has been stable across the
      // 3.2.x line for years, so the exact patch version is low-risk;
      // it does not need to match whatever version Chisel's own build
      // uses internally for its own test suite.
      "org.scalatest"     %% "scalatest"  % "3.2.19" % "test"
    ),
    scalacOptions ++= Seq(
      "-language:reflectiveCalls",
      "-deprecation",
      "-feature",
      "-Xcheckinit"
    ),
    // Found via a real, reproducible failure: `sbt test` (which runs
    // different test SUITES in parallel by default) had two unrelated
    // suites -- SquareTestHwSpec and Conv2dExampleHwSpec -- collide on
    // the EXACT SAME ChiselSim/Verilator workspace directory
    // (build/chiselsim/2026-08-30T16-02-54.117452, confirmed identical
    // in both failures' stack traces), each stepping on the other's
    // generated/cleaned-up files mid-run (NoSuchFileException moving or
    // deleting files the other suite's process had already touched).
    // ChiselSim's workspace-per-test isolation is not safe under sbt's
    // default concurrent suite execution. This also plausibly explains
    // ParallelFFTEngineSpec running for 11000+ seconds in the same run
    // (previously fast in isolation) -- many concurrent Verilator
    // compile/simulate processes competing for the same CPU cores.
    // Disabling test parallelism trades a longer total `sbt test`
    // wall-clock time for tests that no longer corrupt each other's
    // filesystem state -- correctness over raw speed for a test suite.
    Test / parallelExecution := false,
    addCompilerPlugin(("org.chipsalliance" % "chisel-plugin" % chiselVersion).cross(CrossVersion.full))
  )

// Note: no explicit firtool/llvm-firtool dependency is needed. Since Chisel
// 6.0, the firtool native binary is fetched and managed automatically by
// the "firtool-resolver" library that chisel pulls in transitively.
