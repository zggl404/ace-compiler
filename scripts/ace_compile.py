#!/usr/bin/env python3
#
# Copyright (c) Ant Group Co., Ltd
# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

import argparse
import os
import re
import shlex
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

MODEL_CONFIG = {'conv_16x16x32x3': {'input': 'conv_16x16x32x3.onnx'},
 'lenet': {'input': 'lenet.onnx'},
 'resnet20_cifar10': {'relu_sihe': ['relu_vr_def=3',
                                    'relu_vr=/relu/Relu=4;/layer1/layer1.0/relu_1/Relu=4;/layer1/layer1.1/relu/Relu=4;/layer1/layer1.1/relu_1/Relu=5;/layer1/layer1.2/relu_1/Relu=5;/layer2/layer2.0/relu_1/Relu=5;/layer2/layer2.1/relu_1/Relu=5;/layer2/layer2.2/relu_1/Relu=7;/layer3/layer3.0/relu_1/Relu=4;/layer3/layer3.1/relu_1/Relu=6;/layer3/layer3.2/relu/Relu=4;/layer3/layer3.2/relu_1/Relu=20']},
 'resnet32_cifar10': {'relu_sihe': ['relu_vr_def=2',
                                    'relu_vr=/relu/Relu=4;/layer1/layer1.0/relu/Relu=3;/layer1/layer1.0/relu_1/Relu=5;/layer1/layer1.1/relu/Relu=3;/layer1/layer1.1/relu_1/Relu=5;/layer1/layer1.2/relu/Relu=3;/layer1/layer1.2/relu_1/Relu=5;/layer1/layer1.3/relu/Relu=3;/layer1/layer1.3/relu_1/Relu=5;/layer1/layer1.4/relu/Relu=3;/layer1/layer1.4/relu_1/Relu=5;/layer2/layer2.0/relu/Relu=3;/layer2/layer2.0/relu_1/Relu=5;/layer2/layer2.1/relu_1/Relu=5;/layer2/layer2.2/relu_1/Relu=5;/layer2/layer2.3/relu_1/Relu=6;/layer2/layer2.4/relu_1/Relu=6;/layer3/layer3.0/relu/Relu=3;/layer3/layer3.0/relu_1/Relu=5;/layer3/layer3.1/relu_1/Relu=4;/layer3/layer3.2/relu/Relu=3;/layer3/layer3.2/relu_1/Relu=6;/layer3/layer3.3/relu/Relu=4;/layer3/layer3.3/relu_1/Relu=10;/layer3/layer3.4/relu_1/Relu=11']},
 'resnet32_cifar100': {'relu_sihe': ['relu_vr_def=3',
                                     'relu_vr=/relu/Relu=5;/layer1/layer1.0/relu_1/Relu=6;/layer1/layer1.1/relu_1/Relu=7;/layer1/layer1.2/relu_1/Relu=8;/layer1/layer1.3/relu_1/Relu=10;/layer1/layer1.4/relu/Relu=4;/layer1/layer1.4/relu_1/Relu=7;/layer2/layer2.0/relu/Relu=4;/layer2/layer2.0/relu_1/Relu=6;/layer2/layer2.1/relu_1/Relu=8;/layer2/layer2.2/relu/Relu=4;/layer2/layer2.2/relu_1/Relu=8;/layer2/layer2.3/relu_1/Relu=9;/layer2/layer2.4/relu_1/Relu=11;/layer3/layer3.0/relu/Relu=4;/layer3/layer3.0/relu_1/Relu=8;/layer3/layer3.1/relu_1/Relu=9;/layer3/layer3.2/relu/Relu=4;/layer3/layer3.2/relu_1/Relu=11;/layer3/layer3.3/relu/Relu=4;/layer3/layer3.3/relu_1/Relu=26;/layer3/layer3.4/relu/Relu=5;/layer3/layer3.4/relu_1/Relu=46']},
 'resnet44_cifar10': {'relu_sihe': ['relu_vr_def=2',
                                    'relu_vr=/relu/Relu=4;/layer1/layer1.0/relu_1/Relu=5;/layer1/layer1.1/relu_1/Relu=5;/layer1/layer1.2/relu_1/Relu=5;/layer1/layer1.3/relu_1/Relu=6;/layer1/layer1.4/relu_1/Relu=6;/layer1/layer1.5/relu/Relu=2;/layer1/layer1.5/relu_1/Relu=7;/layer1/layer1.6/relu_1/Relu=6;/layer2/layer2.0/relu/Relu=2;/layer2/layer2.0/relu_1/Relu=5;/layer2/layer2.1/relu/Relu=2;/layer2/layer2.1/relu_1/Relu=5;/layer2/layer2.2/relu/Relu=2;/layer2/layer2.2/relu_1/Relu=5;/layer2/layer2.3/relu/Relu=2;/layer2/layer2.3/relu_1/Relu=5;/layer2/layer2.4/relu/Relu=2;/layer2/layer2.4/relu_1/Relu=5;/layer2/layer2.5/relu/Relu=2;/layer2/layer2.5/relu_1/Relu=6;/layer2/layer2.6/relu/Relu=2;/layer2/layer2.6/relu_1/Relu=7;/layer3/layer3.0/relu_1/Relu=5;/layer3/layer3.1/relu/Relu=2;/layer3/layer3.1/relu_1/Relu=5;/layer3/layer3.2/relu/Relu=2;/layer3/layer3.2/relu_1/Relu=6;/layer3/layer3.3/relu_1/Relu=7;/layer3/layer3.4/relu_1/Relu=9;/layer3/layer3.5/relu_1/Relu=15;/layer3/layer3.6/relu_1/Relu=16']},
 'resnet56_cifar10': {'relu_sihe': ['relu_vr_def=2',
                                    'relu_vr=/relu/Relu=4;/layer1/layer1.0/relu_1/Relu=6;/layer1/layer1.1/relu_1/Relu=5;/layer1/layer1.2/relu/Relu=3;/layer1/layer1.2/relu_1/Relu=6;/layer1/layer1.3/relu/Relu=3;/layer1/layer1.3/relu_1/Relu=7;/layer1/layer1.4/relu_1/Relu=6;/layer1/layer1.5/relu_1/Relu=6;/layer1/layer1.6/relu_1/Relu=6;/layer1/layer1.7/relu_1/Relu=6;/layer1/layer1.8/relu_1/Relu=5;/layer2/layer2.0/relu_1/Relu=4;/layer2/layer2.1/relu_1/Relu=4;/layer2/layer2.2/relu_1/Relu=5;/layer2/layer2.3/relu_1/Relu=5;/layer2/layer2.4/relu_1/Relu=6;/layer2/layer2.5/relu_1/Relu=8;/layer2/layer2.6/relu_1/Relu=11;/layer2/layer2.7/relu_1/Relu=11;/layer2/layer2.8/relu_1/Relu=12;/layer3/layer3.0/relu/Relu=3;/layer3/layer3.0/relu_1/Relu=5;/layer3/layer3.1/relu_1/Relu=5;/layer3/layer3.2/relu_1/Relu=5;/layer3/layer3.3/relu_1/Relu=5;/layer3/layer3.4/relu_1/Relu=5;/layer3/layer3.5/relu_1/Relu=6;/layer3/layer3.6/relu_1/Relu=8;/layer3/layer3.7/relu/Relu=3;/layer3/layer3.7/relu_1/Relu=10;/layer3/layer3.8/relu_1/Relu=12']},
 'resnet110_cifar10': {'relu_sihe': ['relu_vr_def=3',
                                     'relu_vr=/relu/Relu=14;/layer1/layer1.0/relu/Relu=4;/layer1/layer1.0/relu_1/Relu=14;/layer1/layer1.1/relu/Relu=4;/layer1/layer1.1/relu_1/Relu=15;/layer1/layer1.10/relu/Relu=5;/layer1/layer1.10/relu_1/Relu=18;/layer1/layer1.11/relu/Relu=5;/layer1/layer1.11/relu_1/Relu=17;/layer1/layer1.12/relu/Relu=4;/layer1/layer1.12/relu_1/Relu=21;/layer1/layer1.13/relu/Relu=7;/layer1/layer1.13/relu_1/Relu=22;/layer1/layer1.14/relu/Relu=7;/layer1/layer1.14/relu_1/Relu=23;/layer1/layer1.15/relu/Relu=7;/layer1/layer1.15/relu_1/Relu=25;/layer1/layer1.16/relu/Relu=6;/layer1/layer1.16/relu_1/Relu=22;/layer1/layer1.17/relu/Relu=6;/layer1/layer1.17/relu_1/Relu=22;/layer1/layer1.2/relu/Relu=3;/layer1/layer1.2/relu_1/Relu=15;/layer1/layer1.3/relu/Relu=6;/layer1/layer1.3/relu_1/Relu=20;/layer1/layer1.4/relu/Relu=5;/layer1/layer1.4/relu_1/Relu=17;/layer1/layer1.5/relu/Relu=5;/layer1/layer1.5/relu_1/Relu=17;/layer1/layer1.6/relu/Relu=5;/layer1/layer1.6/relu_1/Relu=17;/layer1/layer1.7/relu/Relu=4;/layer1/layer1.7/relu_1/Relu=17;/layer1/layer1.8/relu/Relu=4;/layer1/layer1.8/relu_1/Relu=17;/layer1/layer1.9/relu/Relu=5;/layer1/layer1.9/relu_1/Relu=18;/layer2/layer2.0/relu/Relu=6;/layer2/layer2.0/relu_1/Relu=14;/layer2/layer2.1/relu/Relu=4;/layer2/layer2.1/relu_1/Relu=14;/layer2/layer2.10/relu/Relu=3;/layer2/layer2.10/relu_1/Relu=19;/layer2/layer2.11/relu/Relu=3;/layer2/layer2.11/relu_1/Relu=19;/layer2/layer2.12/relu/Relu=3;/layer2/layer2.12/relu_1/Relu=22;/layer2/layer2.13/relu/Relu=3;/layer2/layer2.13/relu_1/Relu=21;/layer2/layer2.14/relu/Relu=3;/layer2/layer2.14/relu_1/Relu=23;/layer2/layer2.15/relu/Relu=3;/layer2/layer2.15/relu_1/Relu=22;/layer2/layer2.16/relu/Relu=4;/layer2/layer2.16/relu_1/Relu=23;/layer2/layer2.17/relu/Relu=3;/layer2/layer2.17/relu_1/Relu=22;/layer2/layer2.2/relu/Relu=3;/layer2/layer2.2/relu_1/Relu=15;/layer2/layer2.3/relu/Relu=4;/layer2/layer2.3/relu_1/Relu=16;/layer2/layer2.4/relu/Relu=4;/layer2/layer2.4/relu_1/Relu=16;/layer2/layer2.5/relu/Relu=3;/layer2/layer2.5/relu_1/Relu=17;/layer2/layer2.6/relu/Relu=5;/layer2/layer2.6/relu_1/Relu=17;/layer2/layer2.7/relu/Relu=3;/layer2/layer2.7/relu_1/Relu=17;/layer2/layer2.8/relu/Relu=3;/layer2/layer2.8/relu_1/Relu=18;/layer2/layer2.9/relu/Relu=4;/layer2/layer2.9/relu_1/Relu=19;/layer3/layer3.0/relu/Relu=5;/layer3/layer3.0/relu_1/Relu=14;/layer3/layer3.1/relu/Relu=4;/layer3/layer3.1/relu_1/Relu=15;/layer3/layer3.10/relu/Relu=3;/layer3/layer3.10/relu_1/Relu=20;/layer3/layer3.11/relu/Relu=4;/layer3/layer3.11/relu_1/Relu=20;/layer3/layer3.12/relu/Relu=4;/layer3/layer3.12/relu_1/Relu=20;/layer3/layer3.13/relu/Relu=4;/layer3/layer3.13/relu_1/Relu=24;/layer3/layer3.14/relu/Relu=4;/layer3/layer3.14/relu_1/Relu=27;/layer3/layer3.15/relu/Relu=4;/layer3/layer3.15/relu_1/Relu=30;/layer3/layer3.16/relu/Relu=4;/layer3/layer3.16/relu_1/Relu=27;/layer3/layer3.17/relu/Relu=9;/layer3/layer3.17/relu_1/Relu=33;/layer3/layer3.2/relu/Relu=3;/layer3/layer3.2/relu_1/Relu=15;/layer3/layer3.3/relu/Relu=4;/layer3/layer3.3/relu_1/Relu=15;/layer3/layer3.4/relu/Relu=3;/layer3/layer3.4/relu_1/Relu=15;/layer3/layer3.5/relu/Relu=3;/layer3/layer3.5/relu_1/Relu=16;/layer3/layer3.6/relu/Relu=3;/layer3/layer3.6/relu_1/Relu=16;/layer3/layer3.7/relu/Relu=3;/layer3/layer3.7/relu_1/Relu=16;/layer3/layer3.8/relu/Relu=3;/layer3/layer3.8/relu_1/Relu=17;/layer3/layer3.9/relu/Relu=3;/layer3/layer3.9/relu_1/Relu=18']}}

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
TIME_EXE = shutil.which("time")
CUDA_BACKENDS = ("phantom", "heongpu", "cheddar")
CHEDDAR_SCALE_BITS = (30, 35, 40)
DEFAULT_VEC_OPTION = "-VEC:conv_parl"
DEFAULT_CKKS_OPTION = "-CKKS:q0=60:sf=56:N=65536"
DEFAULT_P2C_OPTION = "-P2C:lib=cheddar"
DEFAULT_DF_TEMPLATE = "/tmp/{model}.bin"


def resolve_path(path, base_dir=None):
    if path is None:
        return None
    if os.path.isabs(path):
        return path
    if base_dir is not None:
        return os.path.abspath(os.path.join(base_dir, path))
    return os.path.abspath(path)


def looks_like_repo_root(path):
    required_entries = ["fhe-cmplr", "model", "scripts"]
    return all(os.path.exists(os.path.join(path, entry)) for entry in required_entries)


def get_default_repo_root():
    env_root = os.environ.get("ACE_ROOT")
    if env_root:
        return env_root

    candidates = [
        SCRIPT_DIR,
        os.path.dirname(SCRIPT_DIR),
        os.path.dirname(os.path.dirname(SCRIPT_DIR)),
    ]
    for candidate in candidates:
        if looks_like_repo_root(candidate):
            return candidate

    return os.path.dirname(SCRIPT_DIR)


def get_default_compiler(repo_root):
    candidates = [
        os.path.join(repo_root, "release", "driver", "fhe_cmplr"),
        os.path.join(repo_root, "ace_cmplr", "bin", "fhe_cmplr"),
    ]
    for candidate in candidates:
        if os.path.exists(candidate):
            return candidate
    return candidates[0]


def build_timed_command(command):
    if TIME_EXE is None:
        return command
    return [TIME_EXE, "-f", "%e %M", *command]


def run_command(command, label, env=None):
    timed_command = build_timed_command(command)
    print(f"{label} command: {shlex.join(timed_command)}")
    ret = subprocess.run(
        timed_command,
        stdout=subprocess.DEVNULL,
        stderr=subprocess.PIPE,
        text=True,
        env=env,
    )
    if ret.returncode == 0:
        print(f"{label} : SUCCESS!")
    else:
        print(f"{label} : FAILED!")
        print("Error output:")
        print(ret.stderr)
    return ret


def split_option_parts(option, prefix):
    if not option:
        return []
    stripped = option
    if stripped.startswith(prefix):
        stripped = stripped[len(prefix):]
    elif stripped.startswith(prefix[1:]):
        stripped = stripped[len(prefix) - 1:]
    return [part for part in stripped.split(":") if part]


def dedupe_parts(parts):
    seen = set()
    result = []
    for part in parts:
        if part in seen:
            continue
        seen.add(part)
        result.append(part)
    return result


def resolve_data_file(data_file, model, repo_root):
    if not data_file:
        return None
    formatted = data_file.replace("{model}", model)
    return resolve_path(formatted, repo_root)


def rewrite_p2c_option(p2c_option, backend, data_file=None):
    if backend not in CUDA_BACKENDS:
        raise ValueError(
            f"Unsupported backend '{backend}'. Choose from: {', '.join(CUDA_BACKENDS)}"
        )
    if not p2c_option.startswith("-P2C:"):
        raise ValueError(f"Invalid P2C option: {p2c_option}")

    rewritten = []
    has_lib = False
    has_df = False
    for part in p2c_option[len("-P2C:"):].split(":"):
        if part.startswith("lib="):
            rewritten.append(f"lib={backend}")
            has_lib = True
        elif part.startswith("df="):
            has_df = True
            if data_file is not None:
                rewritten.append(f"df={data_file}")
            else:
                rewritten.append(part)
        else:
            rewritten.append(part)

    if not has_lib:
        rewritten.insert(0, f"lib={backend}")
    if data_file is not None and not has_df:
        rewritten.append(f"df={data_file}")
    return "-P2C:" + ":".join(rewritten)


def rewrite_ckks_option(ckks_option, backend):
    if backend != "cheddar":
        return ckks_option
    if not ckks_option.startswith("-CKKS:"):
        raise ValueError(f"Invalid CKKS option: {ckks_option}")

    parts = [part for part in ckks_option[len("-CKKS:"):].split(":") if part]
    rewritten = []
    has_n = False
    has_sf = False
    for part in parts:
        if part.startswith("sf="):
            has_sf = True
            try:
                requested = int(part.split("=", 1)[1])
            except ValueError:
                rewritten.append(part)
                continue
            scale = min(
                CHEDDAR_SCALE_BITS,
                key=lambda candidate: (abs(candidate - requested), -candidate),
            )
            rewritten.append(f"sf={scale}")
        elif part.startswith("N="):
            has_n = True
            rewritten.append("N=65536")
        else:
            rewritten.append(part)

    if not has_n:
        rewritten.append("N=65536")
    if not has_sf:
        rewritten.append("sf=40")
    return "-CKKS:" + ":".join(rewritten)


def build_sihe_option(model, user_sihe_options, enable_bwr=False):
    model_config = MODEL_CONFIG[model]
    sihe_parts = []
    for option in user_sihe_options:
        sihe_parts.extend(split_option_parts(option, "-SIHE:"))
    if enable_bwr:
        sihe_parts.append("bwr")
    sihe_parts.extend(model_config.get("relu_sihe", []))
    sihe_parts = dedupe_parts(sihe_parts)

    if not sihe_parts:
        return None
    return "-SIHE:" + ":".join(sihe_parts)


def upsert_ckks_kv_option(parts, key, value):
    prefix = f"{key}="
    rewritten = [part for part in parts if not part.startswith(prefix)]
    rewritten.append(f"{prefix}{value}")
    return rewritten


def build_ckks_option(
    ckks_option,
    backend,
    enable_sbm=False,
    enable_sm=False,
    input_cipher_lvl=None,
    bootstrap_input_lvl=None,
):
    ckks_parts = split_option_parts(ckks_option, "-CKKS:")
    if enable_sbm:
        ckks_parts.append("sbm")
    if enable_sm:
        ckks_parts.append("sm")
    if input_cipher_lvl is not None:
        ckks_parts = upsert_ckks_kv_option(ckks_parts, "icl", input_cipher_lvl)
    if bootstrap_input_lvl is not None:
        ckks_parts = upsert_ckks_kv_option(ckks_parts, "bil",
                                           bootstrap_input_lvl)
    ckks_parts = dedupe_parts(ckks_parts)
    return rewrite_ckks_option("-CKKS:" + ":".join(ckks_parts), backend)


def build_compile_options(model, args, repo_root):
    options = [args.vec]

    sihe_option = build_sihe_option(model, args.sihe_options, enable_bwr=args.bwr)
    if sihe_option:
        options.append(sihe_option)

    options.append(
        build_ckks_option(
            args.ckks,
            args.backend,
            enable_sbm=args.sbm,
            enable_sm=args.sm,
            input_cipher_lvl=args.icl,
            bootstrap_input_lvl=args.bil,
        )
    )
    if args.fusion:
        options.append("-CKKS:fus")
    options.append(
        rewrite_p2c_option(
            args.p2c,
            args.backend,
            data_file=resolve_data_file(args.df, model, repo_root),
        )
    )

    for extra_option in args.compiler_options:
        options.append(extra_option)
    return options


def get_model_input_filename(model, model_dir, args):
    if args.input_name:
        return args.input_name

    config = MODEL_CONFIG[model]
    if "input" in config:
        return config["input"]
    for suffix in ("_pre.onnx", ".onnx", "_train.onnx"):
        candidate = f"{model}{suffix}"
        if os.path.exists(os.path.join(model_dir, candidate)):
            return candidate
    return f"{model}_pre.onnx"


def cleanup_intermediate_files(input_file):
    stem = os.path.splitext(os.path.basename(input_file))[0]
    candidates = {
        os.path.join(os.getcwd(), f"{stem}.t"),
        os.path.join(os.getcwd(), f"{stem}.json"),
        os.path.join(os.path.dirname(input_file), f"{stem}.t"),
        os.path.join(os.path.dirname(input_file), f"{stem}.json"),
    }
    for path in candidates:
        if os.path.exists(path):
            os.remove(path)


def generate_target_source(repo_root, model, input_file, inc_file, target_source):
    onnx2c = os.path.join(repo_root, "scripts", "onnx2c.py")
    if not os.path.exists(onnx2c):
        raise FileNotFoundError(f"onnx2c script not found: {onnx2c}")

    os.makedirs(os.path.dirname(target_source), exist_ok=True)
    include_stmt = f'#include "{os.path.basename(inc_file)}"\\n'

    with tempfile.NamedTemporaryFile(
        mode="w",
        suffix=".cu",
        prefix=f"{model}_",
        delete=False,
    ) as tmp_file:
        temp_output = tmp_file.name

    try:
        command = [
            sys.executable,
            onnx2c,
            "--model-path",
            input_file,
            "--output-path",
            temp_output,
        ]
        ret = run_command(command, f"Generate target source {model}")
        if ret.returncode != 0:
            return ret

        generated = Path(temp_output).read_text()
        Path(target_source).write_text(include_stmt + generated)
        print(f"Generated target source: {target_source}")
        return ret
    finally:
        if os.path.exists(temp_output):
            os.remove(temp_output)


def compile_model(cmplr, model, input_file, output_file, compile_options, keep=False):
    if not os.path.exists(cmplr):
        raise FileNotFoundError(f"Compiler not found: {cmplr}")
    if not os.path.exists(input_file):
        raise FileNotFoundError(f"Model file not found: {input_file}")

    os.makedirs(os.path.dirname(output_file), exist_ok=True)
    command = [cmplr, *compile_options, input_file, "-o", output_file]
    ret = run_command(command, f"Compile {model}")

    if not keep:
        cleanup_intermediate_files(input_file)

    return ret


def link_target(build_script, build_dir, repo_root, model_dir, model, input_file, inc_file):
    if not os.path.exists(build_script):
        raise FileNotFoundError(f"Build script not found: {build_script}")

    cu_file = os.path.join(model_dir, f"{model}_gpu.cu")
    if not os.path.exists(cu_file):
        print(f"CUDA source file not found: {cu_file}")
        print(f"Falling back to scripts/onnx2c.py to generate {os.path.basename(cu_file)}")
        gen_ret = generate_target_source(repo_root, model, input_file, inc_file, cu_file)
        if gen_ret.returncode != 0:
            return gen_ret

    env = os.environ.copy()
    if build_dir:
        env["ACE_BUILD_DIR"] = build_dir

    command = [build_script, cu_file, inc_file]
    return run_command(command, f"Build target {model}", env=env)


def parse_args():
    parser = argparse.ArgumentParser(
        description=(
            "Compile ACE example models and optionally build their GPU inference targets. "
            "Only ReLU-related SIHE options stay model-specific; vec/sihe/ckks/p2c are user-configurable."
        )
    )
    parser.add_argument(
        "--root",
        default=get_default_repo_root(),
        help="ACE repository root. Defaults to ACE_ROOT or the directory of this script.",
    )
    parser.add_argument(
        "--compiler",
        help="Path to fhe_cmplr. Relative paths are resolved from --root.",
    )
    parser.add_argument(
        "--model-dir",
        help="Directory containing *_pre.onnx and *_gpu.cu files. Relative paths are resolved from --root.",
    )
    parser.add_argument(
        "--link-dir",
        help="Directory for generated *.onnx.inc files. Relative paths are resolved from --root.",
    )
    parser.add_argument(
        "--build-script",
        help="Path to scripts/build_target_gpu.sh. Relative paths are resolved from --root.",
    )
    parser.add_argument(
        "--build-dir",
        help="Build directory passed to the target build script through ACE_BUILD_DIR. Relative paths are resolved from --root.",
    )
    parser.add_argument(
        "--backend",
        default="cheddar",
        choices=CUDA_BACKENDS,
        help=(
            "Compilation backend used for `-P2C:lib=...` and the default generated `.onnx.inc` directory. Default: cheddar."
        ),
    )
    parser.add_argument(
        "--model",
        action="append",
        dest="models",
        help="Compile only the specified model. Can be passed multiple times.",
    )
    parser.add_argument(
        "--input-name",
        help="Override the ONNX input filename for all selected models.",
    )
    parser.add_argument(
        "--vec",
        default=DEFAULT_VEC_OPTION,
        help=f"Vectorization option passed to fhe_cmplr. Default: {DEFAULT_VEC_OPTION}",
    )
    parser.add_argument(
        "--sihe",
        action="append",
        dest="sihe_options",
        default=[],
        help=(
            "Additional SIHE option. Can be passed multiple times. Accepts either `foo:bar` or `-SIHE:foo:bar`. "
            "Model-specific ReLU SIHE options are appended automatically."
        ),
    )
    parser.add_argument(
        "--bwr",
        action="store_true",
        help="Append `bwr` to the SIHE options for every selected model.",
    )
    parser.add_argument(
        "--ckks",
        default=DEFAULT_CKKS_OPTION,
        help=f"CKKS option passed to fhe_cmplr. Default: {DEFAULT_CKKS_OPTION}",
    )
    parser.add_argument(
        "--icl",
        type=int,
        help=(
            "Set `icl=<val>` in the CKKS options to control the input ciphertext level. "
            "Overrides any existing `icl=` already present in `--ckks`."
        ),
    )
    parser.add_argument(
        "--bil",
        type=int,
        help=(
            "Set `bil=<val>` in the CKKS options to control the minimum bootstrap "
            "input ciphertext level. Overrides any existing `bil=` already present "
            "in `--ckks`."
        ),
    )
    parser.add_argument(
        "--sbm",
        action="store_true",
        help="Append `sbm` to the CKKS options for every selected model.",
    )
    parser.add_argument(
        "--sm",
        action="store_true",
        help="Append `sm` to the CKKS options for every selected model.",
    )
    parser.add_argument(
        "--p2c",
        default=DEFAULT_P2C_OPTION,
        help=f"P2C option passed to fhe_cmplr. Default: {DEFAULT_P2C_OPTION}",
    )
    parser.add_argument(
        "--df",
        default=DEFAULT_DF_TEMPLATE,
        help=(
            "Set or override `df=...` in the P2C option for every selected model. "
            f"Supports `{{model}}` in the path. Default: {DEFAULT_DF_TEMPLATE}"
        ),
    )
    parser.add_argument(
        "--compiler-option",
        action="append",
        dest="compiler_options",
        default=[],
        help="Extra compiler option appended after vec/sihe/ckks/p2c. Can be passed multiple times.",
    )
    parser.add_argument(
        "--keep",
        action="store_true",
        help="Keep compiler-generated intermediate .t and .json files.",
    )
    parser.add_argument(
        "--skip-link",
        action="store_true",
        help="Only compile the ONNX model and skip building the GPU target.",
    )
    parser.add_argument(
        "--skip-compile",
        action="store_true",
        help="Skip compilation and only build the GPU target from existing .onnx.inc files.",
    )
    parser.add_argument(
        "--fusion",
        action="store_true",
        help=(
            "Enable CKKS fusion (`-CKKS:fus`) during compilation. The compiler activates the pass for Phantom and Cheddar backends."
        ),
    )
    return parser.parse_args()


def validate_models(models):
    unknown_models = [model for model in models if model not in MODEL_CONFIG]
    if unknown_models:
        raise ValueError(
            f"Unknown model(s): {', '.join(unknown_models)}. Available models: {', '.join(MODEL_CONFIG)}"
        )


def main():
    args = parse_args()
    if args.sbm and args.sm:
        raise ValueError("`--sbm` and `--sm` cannot be enabled at the same time.")
    if args.bil is not None and args.bil < 1:
        raise ValueError("`--bil` must be greater than or equal to 1.")
    repo_root = resolve_path(args.root)
    compiler = resolve_path(args.compiler or get_default_compiler(repo_root), repo_root)
    model_dir = resolve_path(args.model_dir or "model", repo_root)
    link_dir = resolve_path(
        args.link_dir or os.path.join("fhe-cmplr", "rtlib", args.backend, "example"),
        repo_root,
    )
    build_script = resolve_path(
        args.build_script or os.path.join("scripts", "build_target_gpu.sh"),
        repo_root,
    )
    build_dir = resolve_path(args.build_dir or "release", repo_root)

    models = args.models or list(MODEL_CONFIG)
    validate_models(models)

    print(f"ACE root: {repo_root}")
    print(f"Compiler: {compiler}")
    print(f"Backend: {args.backend}")
    print(f"Model dir: {model_dir}")
    print(f"Link dir: {link_dir}")
    print(f"Build script: {build_script}")
    print(f"Build dir: {build_dir}")
    print(f"Compiler vec option: {args.vec}")
    print(f"Compiler ckks option: {args.ckks}")
    if args.icl is not None:
        print(f"Compiler icl: {args.icl}")
    if args.bil is not None:
        print(f"Compiler bil: {args.bil}")
    print(f"Compiler p2c option: {args.p2c}")
    if args.sbm:
        print("Compiler sbm: enabled")
    if args.sm:
        print("Compiler sm: enabled")
    if args.df:
        print(f"Compiler df template: {args.df}")
    if args.bwr:
        print("Compiler bwr: enabled")
    if args.sihe_options:
        print(f"User SIHE options: {args.sihe_options}")
    if args.compiler_options:
        print(f"Extra compiler options: {args.compiler_options}")

    exit_code = 0

    for model in models:
        input_file = os.path.join(model_dir, get_model_input_filename(model, model_dir, args))
        output_file = os.path.join(link_dir, f"{model}_gpu.onnx.inc")
        compile_options = build_compile_options(model, args, repo_root)
        print(f"Resolved compile options for {model}: {shlex.join(compile_options)}")

        try:
            if not args.skip_compile:
                compile_ret = compile_model(
                    compiler,
                    model,
                    input_file,
                    output_file,
                    compile_options,
                    keep=args.keep,
                )
                if compile_ret.returncode != 0:
                    exit_code = compile_ret.returncode
                    continue

            if not args.skip_link:
                build_ret = link_target(
                    build_script,
                    build_dir,
                    repo_root,
                    model_dir,
                    model,
                    input_file,
                    output_file,
                )
                if build_ret.returncode != 0:
                    exit_code = build_ret.returncode
        except (FileNotFoundError, ValueError) as err:
            print(err, file=sys.stderr)
            exit_code = 1

    return exit_code


if __name__ == "__main__":
    raise SystemExit(main())
