#!/usr/bin/env python3

import argparse
import importlib.util
import json
import re
import subprocess
import time
from pathlib import Path


def load_ace_compile(script_path):
    spec = importlib.util.spec_from_file_location("ace_compile", script_path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def resolve_repo_root(script_file):
    return Path(script_file).resolve().parents[1]


def build_default_work_dir(repo_root):
    timestamp = time.strftime("%Y%m%d_%H%M%S")
    return repo_root / "logs" / "compile_times" / timestamp


def parse_args(repo_root):
    parser = argparse.ArgumentParser(
        description=(
            "Compile ACE models one by one, collect compiler-generated .t files, "
            "and emit a unified timing summary."
        )
    )
    parser.add_argument(
        "--root",
        default=str(repo_root),
        help="ACE repository root. Defaults to the parent of this script.",
    )
    parser.add_argument(
        "--compiler",
        default="release/driver/fhe_cmplr",
        help="Path to fhe_cmplr. Relative paths are resolved from --root.",
    )
    parser.add_argument(
        "--model-dir",
        default="model",
        help="Directory containing ONNX models. Relative paths are resolved from --root.",
    )
    parser.add_argument(
        "--work-dir",
        default=None,
        help="Directory to store generated .t/.json/.onnx.inc/logs. Default: logs/compile_times/<timestamp> under --root.",
    )
    parser.add_argument(
        "--model",
        dest="models",
        action="append",
        default=[],
        help="Compile only the specified model key. Can be passed multiple times.",
    )
    parser.add_argument(
        "--backend",
        default="cheddar",
        choices=("phantom", "heongpu", "cheddar"),
        help="Compilation backend used for option rewriting. Default: cheddar.",
    )
    parser.add_argument(
        "--vec",
        default="-VEC:conv_parl:ts",
        help="Vectorization option passed to fhe_cmplr.",
    )
    parser.add_argument(
        "--sihe",
        dest="sihe_options",
        action="append",
        default=["ts"],
        help="Additional SIHE option. Can be passed multiple times.",
    )
    parser.add_argument(
        "--bwr",
        dest="bwr",
        action="store_true",
        default=True,
        help="Append bwr to SIHE options. Default: enabled.",
    )
    parser.add_argument(
        "--no-bwr",
        dest="bwr",
        action="store_false",
        help="Do not append bwr to SIHE options.",
    )
    parser.add_argument(
        "--ckks",
        default="-CKKS:q0=60:sf=40:N=65536:ts",
        help="CKKS option passed to fhe_cmplr before automatic icl/sm/fus rewriting.",
    )
    parser.add_argument(
        "--icl",
        type=int,
        default=7,
        help="Set icl=<val> in the CKKS options. Default: 7.",
    )
    parser.add_argument(
        "--bil",
        type=int,
        default=None,
        help="Set bil=<val> in the CKKS options.",
    )
    parser.add_argument(
        "--sm",
        dest="sm",
        action="store_true",
        default=True,
        help="Append sm to the CKKS options. Default: enabled.",
    )
    parser.add_argument(
        "--no-sm",
        dest="sm",
        action="store_false",
        help="Do not append sm to the CKKS options.",
    )
    parser.add_argument(
        "--fusion",
        dest="fusion",
        action="store_true",
        default=True,
        help="Append -CKKS:fus during compilation. Default: enabled.",
    )
    parser.add_argument(
        "--no-fusion",
        dest="fusion",
        action="store_false",
        help="Do not append -CKKS:fus during compilation.",
    )
    parser.add_argument(
        "--p2c",
        default="-P2C:lib=cheddar:ts",
        help="P2C option passed to fhe_cmplr.",
    )
    parser.add_argument(
        "--df",
        default="/tmp/{model}.bin",
        help="Override df=... in the P2C option. Supports {model}.",
    )
    parser.add_argument(
        "--compiler-option",
        dest="compiler_options",
        action="append",
        default=["-perf", "-O2A:ts", "-FHE_SCHEME:ts", "-POLY:ts"],
        help="Extra compiler option appended after vec/sihe/ckks/p2c. Can be passed multiple times.",
    )
    parser.add_argument(
        "--fail-fast",
        action="store_true",
        help="Stop immediately when a model compile fails.",
    )
    return parser.parse_args()


def resolve_path(base_root, path_value):
    path = Path(path_value)
    if path.is_absolute():
        return path
    return (base_root / path).resolve()


def parse_timing_file(tfile):
    phase_pattern = re.compile(
        r"\[(?P<tool>[^\]]+)\]\[(?P<phase>[^\]]+)\]\[[^\]]*\]\s*:\s*phase_time\s*=\s*"
        r"(?P<phase_time>[0-9.eE+-]+)\s*/\s*(?P<cumulative>[0-9.eE+-]+)\(s\)"
    )
    phases = []
    total_sec = None
    for line in tfile.read_text(errors="replace").splitlines():
        match = phase_pattern.search(line)
        if match is None:
            continue
        phase_name = match.group("phase")
        phase_time = float(match.group("phase_time"))
        cumulative = float(match.group("cumulative"))
        phases.append(
            {
                "tool": match.group("tool"),
                "phase": phase_name,
                "phase_time_sec": phase_time,
                "cumulative_sec": cumulative,
            }
        )
        total_sec = cumulative
    return phases, total_sec


def format_seconds(value):
    if value is None:
        return ""
    return f"{value:.6f}"


def print_summary(rows, phase_order):
    headers = ["model", "status", "total_sec", "wall_sec", *phase_order]
    widths = {header: len(header) for header in headers}
    formatted_rows = []
    for row in rows:
        formatted = {
            "model": row["model"],
            "status": row["status"],
            "total_sec": format_seconds(row.get("total_sec")),
            "wall_sec": format_seconds(row.get("wall_sec")),
        }
        phase_map = row.get("phase_map", {})
        for phase in phase_order:
            formatted[phase] = format_seconds(phase_map.get(phase))
        for header, value in formatted.items():
            widths[header] = max(widths[header], len(value))
        formatted_rows.append(formatted)

    print(" | ".join(header.ljust(widths[header]) for header in headers))
    print("-+-".join("-" * widths[header] for header in headers))
    for formatted in formatted_rows:
        print(" | ".join(formatted[header].ljust(widths[header]) for header in headers))


def write_summary_files(summary_dir, rows, phase_order):
    summary_json = summary_dir / "summary.json"
    summary_tsv = summary_dir / "summary.tsv"
    summary_txt = summary_dir / "summary.txt"

    summary_json.write_text(
        json.dumps(
            {
                "generated_at": time.strftime("%Y-%m-%d %H:%M:%S"),
                "phase_order": phase_order,
                "rows": rows,
            },
            indent=2,
        )
        + "\n"
    )

    headers = ["model", "status", "total_sec", "wall_sec", *phase_order, "t_file"]
    with summary_tsv.open("w") as f:
        f.write("\t".join(headers) + "\n")
        for row in rows:
            phase_map = row.get("phase_map", {})
            values = [
                row["model"],
                row["status"],
                format_seconds(row.get("total_sec")),
                format_seconds(row.get("wall_sec")),
                *[format_seconds(phase_map.get(phase)) for phase in phase_order],
                row.get("t_file", ""),
            ]
            f.write("\t".join(values) + "\n")

    lines = []
    headers_no_file = ["model", "status", "total_sec", "wall_sec", *phase_order]
    widths = {header: len(header) for header in headers_no_file}
    materialized = []
    for row in rows:
        phase_map = row.get("phase_map", {})
        materialized_row = {
            "model": row["model"],
            "status": row["status"],
            "total_sec": format_seconds(row.get("total_sec")),
            "wall_sec": format_seconds(row.get("wall_sec")),
        }
        for phase in phase_order:
            materialized_row[phase] = format_seconds(phase_map.get(phase))
        for header, value in materialized_row.items():
            widths[header] = max(widths[header], len(value))
        materialized.append(materialized_row)

    lines.append(" | ".join(header.ljust(widths[header]) for header in headers_no_file))
    lines.append("-+-".join("-" * widths[header] for header in headers_no_file))
    for row in materialized:
        lines.append(" | ".join(row[header].ljust(widths[header]) for header in headers_no_file))
    summary_txt.write_text("\n".join(lines) + "\n")


def main():
    repo_root = resolve_repo_root(__file__)
    args = parse_args(repo_root)
    repo_root = resolve_path(repo_root, args.root)
    compiler = resolve_path(repo_root, args.compiler)
    model_dir = resolve_path(repo_root, args.model_dir)
    work_dir = (
        resolve_path(repo_root, args.work_dir)
        if args.work_dir is not None
        else build_default_work_dir(repo_root)
    )
    work_dir.mkdir(parents=True, exist_ok=True)
    output_dir = work_dir / "outputs"
    stdout_dir = work_dir / "stdout"
    stderr_dir = work_dir / "stderr"
    output_dir.mkdir(exist_ok=True)
    stdout_dir.mkdir(exist_ok=True)
    stderr_dir.mkdir(exist_ok=True)

    ace_compile = load_ace_compile(Path(__file__).with_name("ace_compile.py"))
    models = args.models or sorted(ace_compile.MODEL_CONFIG.keys())
    missing = [model for model in models if model not in ace_compile.MODEL_CONFIG]
    if missing:
        raise SystemExit(f"Unknown model(s): {', '.join(missing)}")

    summary_rows = []
    phase_order = []
    exit_code = 0

    print(f"ACE root: {repo_root}")
    print(f"Compiler: {compiler}")
    print(f"Model dir: {model_dir}")
    print(f"Work dir: {work_dir}")
    print(f"Models: {', '.join(models)}")

    for model in models:
        model_args = argparse.Namespace(
            vec=args.vec,
            sihe_options=list(args.sihe_options),
            bwr=args.bwr,
            ckks=args.ckks,
            sm=args.sm,
            icl=args.icl,
            bil=args.bil,
            sbm=False,
            backend=args.backend,
            p2c=args.p2c,
            df=args.df,
            compiler_options=list(args.compiler_options),
            fusion=args.fusion,
        )
        input_name = ace_compile.get_model_input_filename(
            model,
            str(model_dir),
            argparse.Namespace(input_name=None),
        )
        input_file = model_dir / input_name
        input_stem = input_file.stem
        output_file = output_dir / f"{model}.onnx.inc"
        t_file = work_dir / f"{input_stem}.t"
        json_file = work_dir / f"{input_stem}.json"
        stdout_file = stdout_dir / f"{model}.stdout.log"
        stderr_file = stderr_dir / f"{model}.stderr.log"

        if t_file.exists():
            t_file.unlink()
        if json_file.exists():
            json_file.unlink()

        compile_options = ace_compile.build_compile_options(model, model_args, str(repo_root))
        command = [str(compiler), *compile_options, str(input_file), "-o", str(output_file)]
        print(f"\n[{model}] command: {' '.join(command)}")

        start = time.perf_counter()
        completed = subprocess.run(
            command,
            cwd=str(work_dir),
            capture_output=True,
            text=True,
        )
        wall_sec = time.perf_counter() - start
        stdout_file.write_text(completed.stdout)
        stderr_file.write_text(completed.stderr)

        phases = []
        total_sec = None
        if t_file.exists():
            phases, total_sec = parse_timing_file(t_file)
        phase_map = {item["phase"]: item["phase_time_sec"] for item in phases}
        for phase in phase_map:
            if phase not in phase_order:
                phase_order.append(phase)

        status = "ok" if completed.returncode == 0 else f"failed({completed.returncode})"
        row = {
            "model": model,
            "input_file": str(input_file),
            "status": status,
            "command": command,
            "wall_sec": wall_sec,
            "total_sec": total_sec,
            "phase_map": phase_map,
            "t_file": str(t_file) if t_file.exists() else "",
            "stdout_file": str(stdout_file),
            "stderr_file": str(stderr_file),
        }
        summary_rows.append(row)

        if completed.returncode == 0:
            print(f"[{model}] ok total_sec={format_seconds(total_sec)} wall_sec={format_seconds(wall_sec)}")
        else:
            print(f"[{model}] failed returncode={completed.returncode} wall_sec={format_seconds(wall_sec)}")
            exit_code = completed.returncode
            if args.fail_fast:
                break

    print()
    print_summary(summary_rows, phase_order)
    write_summary_files(work_dir, summary_rows, phase_order)
    print(f"\nSummary files written under: {work_dir}")
    return exit_code


if __name__ == "__main__":
    raise SystemExit(main())
