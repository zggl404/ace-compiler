#!/usr/bin/env python3

import json
import os
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest

try:
    import ace_compile
except ModuleNotFoundError:
    from scripts import ace_compile


class CheddarLiteralOptionTest(unittest.TestCase):
    def test_p2c_drops_legacy_json_option(self):
        actual = ace_compile.rewrite_p2c_option(
            "-P2C:lib=phantom:cj=legacy.json", "cheddar"
        )
        self.assertEqual(actual, "-P2C:lib=cheddar")

    def test_bwr_selects_rboot_arcsine(self):
        actual = ace_compile.build_ckks_option(
            "-CKKS:q0=60:sf=50:N=65536",
            "cheddar",
            enable_bwr=True,
            enable_sm=True,
        )
        self.assertIn("bem=rboot_arcsine", actual.split(":"))
        self.assertIn("q0=60", actual.split(":"))

    def test_bwr_historical_default_selects_validated_rboot50_schedule(self):
        actual = ace_compile.build_ckks_option(
            ace_compile.DEFAULT_CKKS_OPTION,
            "cheddar",
            enable_bwr=True,
        )
        parts = actual.split(":")
        self.assertIn("bem=rboot_arcsine", parts)
        self.assertIn("sf=50", parts)
        self.assertIn("q0=60", parts)
        self.assertNotIn("sf=55", parts)

    def test_explicit_rboot_scale_is_preserved(self):
        actual = ace_compile.build_ckks_option(
            "-CKKS:q0=60:sf=55:N=65536",
            "cheddar",
            enable_bwr=True,
        )
        parts = actual.split(":")
        self.assertIn("sf=55", parts)
        self.assertIn("q0=60", parts)

    def test_explicit_evalmod_mode_overrides_bwr_default(self):
        actual = ace_compile.build_ckks_option(
            "-CKKS:q0=60:sf=50:N=65536",
            "cheddar",
            enable_bwr=True,
            bootstrap_evalmod_mode="arcsine",
        )
        self.assertIn("bem=arcsine", actual.split(":"))
        self.assertNotIn("bem=rboot_arcsine", actual.split(":"))

    def test_cheddar_word_bits_is_forwarded(self):
        actual = ace_compile.build_ckks_option(
            "-CKKS:q0=60:sf=50:N=65536",
            "cheddar",
            cheddar_word_bits=64,
        )
        self.assertIn("cwb=64", actual.split(":"))

    def test_cheddar_word_bits_replaces_existing_value(self):
        actual = ace_compile.build_ckks_option(
            "-CKKS:q0=60:sf=50:N=65536:cwb=32",
            "cheddar",
            cheddar_word_bits=64,
        )
        self.assertEqual(actual.split(":").count("cwb=64"), 1)
        self.assertNotIn("cwb=32", actual.split(":"))

    def test_non_bootstrap_scale_is_preserved(self):
        actual = ace_compile.rewrite_ckks_option(
            "-CKKS:q0=31:sf=30:N=65536", "cheddar"
        )
        self.assertIn("sf=30", actual.split(":"))

    def test_historical_default_scale_maps_to_supported_bootstrap_scale(self):
        actual = ace_compile.rewrite_ckks_option(
            "-CKKS:q0=60:sf=56:N=65536", "cheddar"
        )
        self.assertIn("sf=55", actual.split(":"))


@unittest.skipUnless(sys.platform.startswith("linux"), "Run in the Linux image")
class ResnetTimedRunnerTest(unittest.TestCase):
    def test_batch_arguments_outputs_and_stop_on_failure(self):
        # Exercise orchestration with the real CLI parser and a mock inference
        # process. This check never invokes the compiler or a GPU.
        with tempfile.TemporaryDirectory(prefix="resnet timing ") as temporary:
            root = Path(temporary)
            mock_bin = root / "bin"
            mock_bin.mkdir()
            mock_python = mock_bin / "python3"
            mock_python.write_text(f"#!{sys.executable}\n" + r'''
import json, os, sys
from pathlib import Path
arguments = sys.argv[1:]
if arguments[0] == "-u":
    arguments.pop(0)
sys.path.insert(0, str(Path(arguments[0]).resolve().parent))
import ace_resnet_cifar10_infer as cli
sys.argv = arguments
args = cli.parse_args()
model = args.models[0]
print("MOCK inference:", model, flush=True)
if os.environ.get("FAIL_MODEL") == model:
    sys.exit(7)
assert args.rot_key_mode == "full" and args.encode_mode == "pre"
assert args.pre_encode_count == 0 and args.num == 11
assert args.sbm and args.vec == "-VEC:conv_parl:ssf"
assert args.ckks == "-CKKS:q0=60:sf=50:N=65536:bes=55:bnl=19:bmr=10"
assert args.capture_timing and not args.skip_run
assert os.environ["ACE_RTLIB_TIMING_SKIP_FIRST_IMAGE"] == "1"
Path(args.timing_json).write_text(json.dumps({"mock": True, "model": model,
                                           "word_bits": args.cheddar_word_bits}))
''')
            mock_python.chmod(0o755)
            runner = Path(__file__).with_name("run_resnets_timed.sh")
            models = ["resnet20", "resnet32", "resnet44", "resnet56", "resnet110"]
            env = dict(os.environ, PATH=str(mock_bin) + os.pathsep + os.environ["PATH"])
            env.pop("FAIL_MODEL", None)
            for bits in (32, 64):
                output = root / f"results {bits}"
                completed = subprocess.run(
                    ["bash", str(runner), str(output)],
                    env=dict(env, CHEDDAR_WORD_BITS=str(bits)),
                    capture_output=True, text=True,
                )
                self.assertEqual(completed.returncode, 0, completed.stdout + completed.stderr)
                self.assertEqual(sorted(p.name for p in output.iterdir()), sorted(models))
                for model in models:
                    case = output / model
                    self.assertEqual(json.loads((case / "timing.json").read_text()),
                                     {"mock": True, "model": model, "word_bits": bits})
                    self.assertIn("MOCK inference: " + model, (case / "run.log").read_text())
                    self.assertIn("command_total_sec=", (case / "command_total.txt").read_text())
            output = root / "failure"
            failed = subprocess.run(
                ["bash", str(runner), str(output)],
                env=dict(env, CHEDDAR_WORD_BITS="32", FAIL_MODEL="resnet44"),
                capture_output=True, text=True,
            )
            self.assertEqual(failed.returncode, 7)
            self.assertTrue((output / "resnet44/run.log").exists())
            self.assertFalse((output / "resnet56").exists())
            self.assertFalse((output / "resnet110").exists())


if __name__ == "__main__":
    unittest.main()
