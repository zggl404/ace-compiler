#!/usr/bin/env python3
#
# Copyright (c) Ant Group Co., Ltd
# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

import argparse
import os
import shlex
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

CONFIG = {
    "conv_16x16x32x3": {
        "input": "conv_16x16x32x3.onnx",
        "vec": "-VEC:conv_parl",
        "ckks": "-CKKS:q0=60:sf=56:N=65536",
        "p2c": "-P2C:lib=phantom:df=/tmp/conv_16x16x32x3.bin",
    },
    "lenet": {
        "input": "lenet.onnx",
        "vec": "-VEC:conv_parl",
        "sihe": "bwr",
        "ckks": "-CKKS:q0=60:sf=56:N=65536",
        "p2c": "-P2C:lib=phantom:df=/tmp/lenet.bin",
    },
    "resnet20_cifar10": {
        "vec": "-VEC:conv_parl:ssf",
        "sihe": "bwr",
        "relu_vr_def": 3,
        "relu_vr": (
            "/relu/Relu=4;"
            "/layer1/layer1.0/relu_1/Relu=4;/layer1/layer1.1/relu/Relu=4;/layer1/layer1.1/relu_1/Relu=5;/layer1/layer1.2/relu_1/Relu=5;"
            "/layer2/layer2.0/relu_1/Relu=5;/layer2/layer2.1/relu_1/Relu=5;/layer2/layer2.2/relu_1/Relu=7;/layer3/layer3.0/relu_1/Relu=4;"
            "/layer3/layer3.1/relu_1/Relu=6;/layer3/layer3.2/relu/Relu=4;/layer3/layer3.2/relu_1/Relu=20"
        ),
        "ckks": "-CKKS:q0=60:sf=56:N=65536",
        "p2c": "-P2C:lib=phantom:df=/tmp/resnet20_cifar10.bin",
    },
    "resnet32_cifar10": {
        "vec": "-VEC:conv_parl:ssf",
        "relu_vr_def": 2,
        "relu_vr": (
            "/relu/Relu=4;"
            "/layer1/layer1.0/relu/Relu=3;/layer1/layer1.0/relu_1/Relu=5;/layer1/layer1.1/relu/Relu=3;/layer1/layer1.1/relu_1/Relu=5;"
            "/layer1/layer1.2/relu/Relu=3;/layer1/layer1.2/relu_1/Relu=5;/layer1/layer1.3/relu/Relu=3;/layer1/layer1.3/relu_1/Relu=5;/layer1/layer1.4/relu/Relu=3;/layer1/layer1.4/relu_1/Relu=5;"
            "/layer2/layer2.0/relu/Relu=3;/layer2/layer2.0/relu_1/Relu=5;/layer2/layer2.1/relu_1/Relu=5;/layer2/layer2.2/relu_1/Relu=5;/layer2/layer2.3/relu_1/Relu=6;/layer2/layer2.4/relu_1/Relu=6;"
            "/layer3/layer3.0/relu/Relu=3;/layer3/layer3.0/relu_1/Relu=5;/layer3/layer3.1/relu_1/Relu=4;/layer3/layer3.2/relu/Relu=3;/layer3/layer3.2/relu_1/Relu=6;/layer3/layer3.3/relu/Relu=4;/layer3/layer3.3/relu_1/Relu=10;/layer3/layer3.4/relu_1/Relu=11"
        ),
        "ckks": "-CKKS:q0=60:sf=56:N=65536",
        "p2c": "-P2C:lib=phantom",
    },
    "resnet32_cifar100": {
        "vec": "-VEC:conv_parl:ssf",
        "relu_vr_def": 3,
        "relu_vr": (
            "/relu/Relu=5;"
            "/layer1/layer1.0/relu_1/Relu=6;/layer1/layer1.1/relu_1/Relu=7;/layer1/layer1.2/relu_1/Relu=8;/layer1/layer1.3/relu_1/Relu=10;/layer1/layer1.4/relu/Relu=4;/layer1/layer1.4/relu_1/Relu=7;"
            "/layer2/layer2.0/relu/Relu=4;/layer2/layer2.0/relu_1/Relu=6;/layer2/layer2.1/relu_1/Relu=8;/layer2/layer2.2/relu/Relu=4;/layer2/layer2.2/relu_1/Relu=8;/layer2/layer2.3/relu_1/Relu=9;/layer2/layer2.4/relu_1/Relu=11;"
            "/layer3/layer3.0/relu/Relu=4;/layer3/layer3.0/relu_1/Relu=8;/layer3/layer3.1/relu_1/Relu=9;/layer3/layer3.2/relu/Relu=4;/layer3/layer3.2/relu_1/Relu=11;/layer3/layer3.3/relu/Relu=4;/layer3/layer3.3/relu_1/Relu=26;/layer3/layer3.4/relu/Relu=5;/layer3/layer3.4/relu_1/Relu=46"
        ),
        "ckks": "-CKKS:q0=60:sf=56:N=65536",
        "p2c": "-P2C:lib=phantom",
    },
    "resnet44_cifar10": {
        "vec": "-VEC:conv_parl:ssf",
        "relu_vr_def": 2,
        "relu_vr": (
            "/relu/Relu=4;"
            "/layer1/layer1.0/relu_1/Relu=5;/layer1/layer1.1/relu_1/Relu=5;/layer1/layer1.2/relu_1/Relu=5;/layer1/layer1.3/relu_1/Relu=6;/layer1/layer1.4/relu_1/Relu=6;/layer1/layer1.5/relu/Relu=2;/layer1/layer1.5/relu_1/Relu=7;/layer1/layer1.6/relu_1/Relu=6;"
            "/layer2/layer2.0/relu/Relu=2;/layer2/layer2.0/relu_1/Relu=5;/layer2/layer2.1/relu/Relu=2;/layer2/layer2.1/relu_1/Relu=5;/layer2/layer2.2/relu/Relu=2;"
            "/layer2/layer2.2/relu_1/Relu=5;/layer2/layer2.3/relu/Relu=2;/layer2/layer2.3/relu_1/Relu=5;/layer2/layer2.4/relu/Relu=2;/layer2/layer2.4/relu_1/Relu=5;/layer2/layer2.5/relu/Relu=2;/layer2/layer2.5/relu_1/Relu=6;/layer2/layer2.6/relu/Relu=2;/layer2/layer2.6/relu_1/Relu=7;"
            "/layer3/layer3.0/relu_1/Relu=5;/layer3/layer3.1/relu/Relu=2;/layer3/layer3.1/relu_1/Relu=5;/layer3/layer3.2/relu/Relu=2;/layer3/layer3.2/relu_1/Relu=6;/layer3/layer3.3/relu_1/Relu=7;/layer3/layer3.4/relu_1/Relu=9;/layer3/layer3.5/relu_1/Relu=15;/layer3/layer3.6/relu_1/Relu=16"
        ),
        "ckks": "-CKKS:q0=60:sf=56:N=65536",
        "p2c": "-P2C:lib=phantom",
    },
    "resnet56_cifar10": {
        "vec": "-VEC:conv_parl:ssf",
        "relu_vr_def": 2,
        "relu_vr": (
            "/relu/Relu=4;"
            "/layer1/layer1.0/relu_1/Relu=6;/layer1/layer1.1/relu_1/Relu=5;/layer1/layer1.2/relu/Relu=3;/layer1/layer1.2/relu_1/Relu=6;/layer1/layer1.3/relu/Relu=3;/layer1/layer1.3/relu_1/Relu=7;/layer1/layer1.4/relu_1/Relu=6;/layer1/layer1.5/relu_1/Relu=6;/layer1/layer1.6/relu_1/Relu=6;/layer1/layer1.7/relu_1/Relu=6;/layer1/layer1.8/relu_1/Relu=5;"
            "/layer2/layer2.0/relu_1/Relu=4;/layer2/layer2.1/relu_1/Relu=4;/layer2/layer2.2/relu_1/Relu=5;/layer2/layer2.3/relu_1/Relu=5;/layer2/layer2.4/relu_1/Relu=6;/layer2/layer2.5/relu_1/Relu=8;/layer2/layer2.6/relu_1/Relu=11;/layer2/layer2.7/relu_1/Relu=11;/layer2/layer2.8/relu_1/Relu=12;"
            "/layer3/layer3.0/relu/Relu=3;/layer3/layer3.0/relu_1/Relu=5;/layer3/layer3.1/relu_1/Relu=5;/layer3/layer3.2/relu_1/Relu=5;/layer3/layer3.3/relu_1/Relu=5;/layer3/layer3.4/relu_1/Relu=5;/layer3/layer3.5/relu_1/Relu=6;/layer3/layer3.6/relu_1/Relu=8;/layer3/layer3.7/relu/Relu=3;/layer3/layer3.7/relu_1/Relu=10;/layer3/layer3.8/relu_1/Relu=12"
        ),
        "ckks": "-CKKS:q0=60:sf=56:N=65536",
        "p2c": "-P2C:lib=phantom",
    },
    "resnet110_cifar10": {
        "vec": "-VEC:conv_parl:ssf",
        "relu_vr_def": 3,
        "relu_vr": (
            "/relu/Relu=14;"
            "/layer1/layer1.0/relu/Relu=4;/layer1/layer1.0/relu_1/Relu=14;/layer1/layer1.1/relu/Relu=4;/layer1/layer1.1/relu_1/Relu=15;/layer1/layer1.10/relu/Relu=5;/layer1/layer1.10/relu_1/Relu=18;/layer1/layer1.11/relu/Relu=5;/layer1/layer1.11/relu_1/Relu=17;"
            "/layer1/layer1.12/relu/Relu=4;/layer1/layer1.12/relu_1/Relu=21;/layer1/layer1.13/relu/Relu=7;/layer1/layer1.13/relu_1/Relu=22;/layer1/layer1.14/relu/Relu=7;/layer1/layer1.14/relu_1/Relu=23;/layer1/layer1.15/relu/Relu=7;/layer1/layer1.15/relu_1/Relu=25;"
            "/layer1/layer1.16/relu/Relu=6;/layer1/layer1.16/relu_1/Relu=22;/layer1/layer1.17/relu/Relu=6;/layer1/layer1.17/relu_1/Relu=22;/layer1/layer1.2/relu/Relu=3;/layer1/layer1.2/relu_1/Relu=15;/layer1/layer1.3/relu/Relu=6;/layer1/layer1.3/relu_1/Relu=20;"
            "/layer1/layer1.4/relu/Relu=5;/layer1/layer1.4/relu_1/Relu=17;/layer1/layer1.5/relu/Relu=5;"
            "/layer1/layer1.5/relu_1/Relu=17;/layer1/layer1.6/relu/Relu=5;/layer1/layer1.6/relu_1/Relu=17;/layer1/layer1.7/relu/Relu=4;/layer1/layer1.7/relu_1/Relu=17;/layer1/layer1.8/relu/Relu=4;/layer1/layer1.8/relu_1/Relu=17;/layer1/layer1.9/relu/Relu=5;/layer1/layer1.9/relu_1/Relu=18;"
            "/layer2/layer2.0/relu/Relu=6;/layer2/layer2.0/relu_1/Relu=14;/layer2/layer2.1/relu/Relu=4;/layer2/layer2.1/relu_1/Relu=14;/layer2/layer2.10/relu/Relu=3;/layer2/layer2.10/relu_1/Relu=19;/layer2/layer2.11/relu/Relu=3;/layer2/layer2.11/relu_1/Relu=19;/layer2/layer2.12/relu/Relu=3;"
            "/layer2/layer2.12/relu_1/Relu=22;/layer2/layer2.13/relu/Relu=3;/layer2/layer2.13/relu_1/Relu=21;/layer2/layer2.14/relu/Relu=3;/layer2/layer2.14/relu_1/Relu=23;/layer2/layer2.15/relu/Relu=3;/layer2/layer2.15/relu_1/Relu=22;/layer2/layer2.16/relu/Relu=4;/layer2/layer2.16/relu_1/Relu=23;"
            "/layer2/layer2.17/relu/Relu=3;/layer2/layer2.17/relu_1/Relu=22;/layer2/layer2.2/relu/Relu=3;/layer2/layer2.2/relu_1/Relu=15;/layer2/layer2.3/relu/Relu=4;/layer2/layer2.3/relu_1/Relu=16;/layer2/layer2.4/relu/Relu=4;/layer2/layer2.4/relu_1/Relu=16;/layer2/layer2.5/relu/Relu=3;"
            "/layer2/layer2.5/relu_1/Relu=17;/layer2/layer2.6/relu/Relu=5;/layer2/layer2.6/relu_1/Relu=17;/layer2/layer2.7/relu/Relu=3;/layer2/layer2.7/relu_1/Relu=17;/layer2/layer2.8/relu/Relu=3;/layer2/layer2.8/relu_1/Relu=18;/layer2/layer2.9/relu/Relu=4;/layer2/layer2.9/relu_1/Relu=19;"
            "/layer3/layer3.0/relu/Relu=5;/layer3/layer3.0/relu_1/Relu=14;/layer3/layer3.1/relu/Relu=4;/layer3/layer3.1/relu_1/Relu=15;/layer3/layer3.10/relu/Relu=3;/layer3/layer3.10/relu_1/Relu=20;/layer3/layer3.11/relu/Relu=4;/layer3/layer3.11/relu_1/Relu=20;"
            "/layer3/layer3.12/relu/Relu=4;/layer3/layer3.12/relu_1/Relu=20;/layer3/layer3.13/relu/Relu=4;/layer3/layer3.13/relu_1/Relu=24;/layer3/layer3.14/relu/Relu=4;/layer3/layer3.14/relu_1/Relu=27;/layer3/layer3.15/relu/Relu=4;/layer3/layer3.15/relu_1/Relu=30;"
            "/layer3/layer3.16/relu/Relu=4;/layer3/layer3.16/relu_1/Relu=27;/layer3/layer3.17/relu/Relu=9;/layer3/layer3.17/relu_1/Relu=33;/layer3/layer3.2/relu/Relu=3;/layer3/layer3.2/relu_1/Relu=15;/layer3/layer3.3/relu/Relu=4;/layer3/layer3.3/relu_1/Relu=15;/layer3/layer3.4/relu/Relu=3;/layer3/layer3.4/relu_1/Relu=15;/layer3/layer3.5/relu/Relu=3;"
            "/layer3/layer3.5/relu_1/Relu=16;/layer3/layer3.6/relu/Relu=3;/layer3/layer3.6/relu_1/Relu=16;/layer3/layer3.7/relu/Relu=3;/layer3/layer3.7/relu_1/Relu=16;/layer3/layer3.8/relu/Relu=3;/layer3/layer3.8/relu_1/Relu=17;/layer3/layer3.9/relu/Relu=3;/layer3/layer3.9/relu_1/Relu=18"
        ),
        "ckks": "-CKKS:q0=60:sf=56:N=65536",
        "p2c": "-P2C:lib=phantom",
    },
}


SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
TIME_EXE = shutil.which("time")
CUDA_BACKENDS = ("phantom", "heongpu")


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


def rewrite_p2c_option(p2c_option, backend):
    if backend not in CUDA_BACKENDS:
        raise ValueError(
            f"Unsupported backend '{backend}'. Choose from: {', '.join(CUDA_BACKENDS)}"
        )
    if not p2c_option.startswith("-P2C:"):
        raise ValueError(f"Invalid P2C option: {p2c_option}")

    rewritten = []
    has_lib = False
    for part in p2c_option[len("-P2C:") :].split(":"):
        if part.startswith("lib="):
            rewritten.append(f"lib={backend}")
            has_lib = True
        elif backend == "heongpu" and part.startswith("df="):
            continue
        else:
            rewritten.append(part)

    if not has_lib:
        rewritten.insert(0, f"lib={backend}")
    return "-P2C:" + ":".join(rewritten)


def parser_option(model, backend="phantom", enable_fusion=False):
    """
    Get the compilation option based on the model name.
    """

    config = CONFIG.get(model)
    if config is None:
        raise ValueError(f"Configuration for model '{model}' not found.")

    options = [config["vec"]]

    sihe_parts = []
    sihe_opt = config.get("sihe")
    if sihe_opt:
        if sihe_opt.startswith("-SIHE:"):
            sihe_opt = sihe_opt[len("-SIHE:") :]
        elif sihe_opt.startswith("SIHE:"):
            sihe_opt = sihe_opt[len("SIHE:") :]
        sihe_parts.extend(part for part in sihe_opt.split(":") if part)

    # `bwr` lowers relu directly into Phantom-only bootstrap_with_relu.
    # HEonGPU currently supports only the regular bootstrap path.
    if backend == "heongpu":
        sihe_parts = [part for part in sihe_parts if part != "bwr"]

    if "relu_vr_def" in config and "relu_vr" in config:
        sihe_parts.append(f"relu_vr_def={config['relu_vr_def']}")
        sihe_parts.append(f"relu_vr={config['relu_vr']}")

    if sihe_parts:
        options.append(f"-SIHE:{':'.join(sihe_parts)}")

    options.append(config["ckks"])
    if enable_fusion:
        options.append("-CKKS:fus")
    options.append(rewrite_p2c_option(config["p2c"], backend))
    return options


def get_model_input_filename(model, config):
    if "input" in config:
        return config["input"]
    for suffix in ("_pre.onnx", ".onnx", "_train.onnx"):
        candidate = f"{model}{suffix}"
        if os.path.exists(os.path.join(model_dir_global, candidate)):
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
    include_stmt = f'#include "{os.path.basename(inc_file)}"\n'

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


def compile_model(cmplr, model, input_file, output_file, keep=False,
                  backend="phantom", enable_fusion=False):
    """
    Compile the model with the given commands and options.
    """

    if not os.path.exists(cmplr):
        raise FileNotFoundError(f"Compiler not found: {cmplr}")
    if not os.path.exists(input_file):
        raise FileNotFoundError(f"Model file not found: {input_file}")

    os.makedirs(os.path.dirname(output_file), exist_ok=True)
    command = [
        cmplr,
        *parser_option(model, backend=backend, enable_fusion=enable_fusion),
        input_file,
        "-o",
        output_file,
    ]
    ret = run_command(command, f"Compile {model}")

    if not keep:
        cleanup_intermediate_files(input_file)

    return ret


def link_target(build_script, build_dir, repo_root, model_dir, model, input_file, inc_file):
    """
    Build the model inference target.
    """

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


def inference(prog, input_file, idx, num):
    """
    Execute the model inference program.
    """

    command = [prog, input_file, str(idx), str(num)]
    return run_command(command, "Inference")


def parse_args():
    parser = argparse.ArgumentParser(
        description=(
            "Compile ACE example models and optionally build their GPU inference targets."
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
        default="phantom",
        choices=CUDA_BACKENDS,
        help=(
            "Compilation backend used for `-P2C:lib=...` and the default "
            "generated `.onnx.inc` directory."
        ),
    )
    parser.add_argument(
        "--model",
        action="append",
        dest="models",
        help="Compile only the specified model. Can be passed multiple times.",
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
            "Enable CKKS fusion (`-CKKS:fus`) during compilation. "
            "The compiler still only activates the pass when the target backend is Phantom."
        ),
    )
    return parser.parse_args()


def validate_models(models):
    unknown_models = [model for model in models if model not in CONFIG]
    if unknown_models:
        raise ValueError(
            f"Unknown model(s): {', '.join(unknown_models)}. "
            f"Available models: {', '.join(CONFIG)}"
        )


def main():
    args = parse_args()
    repo_root = resolve_path(args.root)
    compiler = resolve_path(
        args.compiler or get_default_compiler(repo_root),
        repo_root,
    )
    model_dir = resolve_path(args.model_dir or "model", repo_root)
    link_dir = resolve_path(
        args.link_dir
        or os.path.join("fhe-cmplr", "rtlib", args.backend, "example"),
        repo_root,
    )
    build_script = resolve_path(
        args.build_script or os.path.join("scripts", "build_target_gpu.sh"),
        repo_root,
    )
    build_dir = resolve_path(args.build_dir or "release", repo_root)

    models = args.models or list(CONFIG)
    validate_models(models)

    print(f"ACE root: {repo_root}")
    print(f"Compiler: {compiler}")
    print(f"Backend: {args.backend}")
    print(f"Model dir: {model_dir}")
    print(f"Link dir: {link_dir}")
    print(f"Build script: {build_script}")
    print(f"Build dir: {build_dir}")

    exit_code = 0
    global model_dir_global
    model_dir_global = model_dir

    for model in models:
        config = CONFIG[model]
        input_file = os.path.join(model_dir, get_model_input_filename(model, config))
        output_file = os.path.join(link_dir, f"{model}_gpu.onnx.inc")

        try:
            if not args.skip_compile:
                compile_ret = compile_model(
                    compiler,
                    model,
                    input_file,
                    output_file,
                    keep=args.keep,
                    backend=args.backend,
                    enable_fusion=args.fusion,
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
