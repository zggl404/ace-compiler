#!/usr/bin/env python3

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


if __name__ == "__main__":
    unittest.main()
