from parse_fhelipe_data import extract_fhelipe_data, compute_fhelipe_slot_util
from parse_mkr_data import parse_mkr_engine_logs
from parse_bsgs_data import parse_bsgs_logs
import numbers
from pathlib import Path


def load_performance_data(data_dir: Path) -> tuple[dict, dict]:
    """Loads and returns performance data for both Fhelipe and MKR."""
    print("Extracting FHELIPE data...")
    fhelipe_data = extract_fhelipe_data(data_dir / 'fhelipe')

    print("Extracting MKR data...")
    mkr_data = parse_mkr_engine_logs(data_dir / 'mkr')

    print("Extracting BSGS data...")
    bsgs_data = parse_bsgs_logs(data_dir / 'bsgs')

    assert fhelipe_data, "FHELIPE data is empty!"
    assert mkr_data, "MKR data is empty!"
    assert bsgs_data, "BSGS data is empty!"
    
    return fhelipe_data, mkr_data, bsgs_data


def format_speedup(numerator, denominator, default_value='–') -> str:
    """Calculates and formats a speedup value as a string."""
    if not isinstance(numerator, numbers.Number) or not isinstance(denominator, numbers.Number) or denominator == 0:
        return default_value
    try:
        return f"{numerator / denominator:.2f}x"
    except TypeError:
        return default_value


def process_special_mvm2(fhelipe_perf_data: dict, mvm2_key: str):
    """Applies special case data for the MVM2 benchmark."""
    kernel_data = {
        "SlotUtil": compute_fhelipe_slot_util(mvm2_key),
        "Rotations": 65535,
        "CompileTime": 882.63,
        "Runtime": '>20h',
        "CONVTime": 0.0,
        "GEMMTime": 0.0,
    }
    fhelipe_perf_data[mvm2_key] = kernel_data

