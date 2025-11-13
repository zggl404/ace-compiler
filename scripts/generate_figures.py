import argparse
import logging
import os
from pathlib import Path
import re

import matplotlib.pyplot as plt
from matplotlib.text import Text
import numpy as np
import pandas as pd
from plottable import ColumnDefinition, Table
from collections import defaultdict

# ==============================================================================
# SECTION 1: DATA PARSING
# ==============================================================================

# The optimization options remain global as they are a fixed configuration
OPTIMIZATION_OPTIONS = ['sss.cf.mf', 'base', 'cf', 'mf', 'ncf', 'sss']

# Descriptions for each table, to be placed above them.
FIGURE_DESCRIPTIONS = {
    "Table3": """FUSION COUNTS OF nGraph, AND FHEFusion ACROSS 13 MODEL
VARIANTS. FOR FHEFusion, FOUR FUSION VARIANTS ARE CONSIDERED:
CF (CONSTANT FOLDING), MF (MASKING), SF (COMPACTION VIA
Strided_Slice), AND ALL (COMBINING ALL).""",
    "Table4": "MULTIPLICATIVE DEPTHS OF ANT-ACE, nGraph, AND FHEFusion.",
    "Table5": "IMPACT OF FUSION ON BOOTSTRAPS REQUIRED.",
    "Table6": "COMPILE TIMES OF ANT-ACE AND FHEFusion (SECONDS).",
}

CHART_DESCRIPTIONS = {
    "Fig9": ("Fig. 9. Speedups of ANT-ACE, nGraph, and FHEFusion (normalized to\n"
             "ANT-ACE) for six models with high-degree polynomial RELU."),
    "Fig10": ("Fig. 10. Speedups of ANT-ACE, nGraph, and FHEFusion (normalized\n"
              "to ANT-ACE) for seven models with quadratic RELU approximations."),
    "Fig11": "Fig. 11. FHEFusion Ablation (vs. ANT-ACE) on six models in Figure 9.",
    "Fig12": "Fig. 12. FHEFusion Ablation (vs. ANT-ACE) on seven models in Figure 10.",
}


def run_parser(data_directory: Path) -> pd.DataFrame:
    """Main parser function. Scans a directory, parses log/t files, and returns a single DataFrame."""
    results = defaultdict(lambda: defaultdict(dict))
    
    logging.info(f"--- Starting File Scan in Directory: {data_directory.resolve()} ---")
    
    for filename in sorted(os.listdir(data_directory)):

        model_name, opt = _parse_filename(filename)
        if not model_name or not opt: continue
            
        filepath = data_directory / filename

        if filename.endswith('.log'):
            results[model_name][opt].update(_parse_log_file(filepath))
        elif filename.endswith('.t'):
            results[model_name][opt].update(_parse_t_file(filepath))
            
    flat_data = [
        {'Model_Raw': model, 'Optimization': opt, **data_points}
        for model, opt_data in results.items()
        for opt, data_points in opt_data.items()
    ]
            
    if not flat_data:
        raise ValueError(f"No valid data files found or parsed in directory: {data_directory}")
        
    df = pd.DataFrame(flat_data)
    logging.info(f"--- Parsing complete. Found {len(df)} data entries. ---")
    return df

def _parse_filename(filename: str):
    """Parses model name and optimization from a filename."""
    base_name, _ = os.path.splitext(filename)
    for opt in OPTIMIZATION_OPTIONS:
        if base_name.endswith('.' + opt):
            return base_name[:-len('.' + opt)], opt
    return None, None

def _parse_log_file(filepath: Path) -> dict: # <-- Changed to Path for consistency
    """Extracts data from a .log file."""
    data = {
        'compile_time_s': 0.0, 'main_graph_time_s': 0.0, 'bootstrap_count': 0,
        'cf_fusion_count': 0, 'mf_fusion_count': 0, 'sss_fusion_count': 0,
        'total_fusion_count': 0,
    }
    re_map = {
        'compile_time': re.compile(r"real\s+(\d+)m([\d\.]+)s"), 'main_graph': re.compile(r"MAIN_GRAPH\s+\d+\s+([\d\.]+) sec"),
        'bootstrap': re.compile(r"BOOTSTRAP\s+([\d-]+)\s+.*"), 'cf_fusion': re.compile(r"constant folding fusion count:\s*(\d+)"),
        'mf_fusion': re.compile(r"masking fusion count:\s*(\d+)"), 'sss_fusion': re.compile(r"strided_slice fusion count:\s*(\d+)"),
        'total_fusion': re.compile(r"total fusion count:\s*(\d+)")
    }
    found_first_time_block = False
    try:
        with open(filepath, 'r', encoding='utf-8') as f:
            for line in f:
                if not found_first_time_block and (match := re_map['compile_time'].search(line)):
                    data['compile_time_s'] = int(match.group(1)) * 60 + float(match.group(2))
                    found_first_time_block = True
                if (match := re_map['main_graph'].search(line)): data['main_graph_time_s'] = float(match.group(1))
                if (match := re_map['bootstrap'].search(line)): data['bootstrap_count'] = 0 if match.group(1) == '-' else int(match.group(1))
                if (match := re_map['cf_fusion'].search(line)): data['cf_fusion_count'] = int(match.group(1))
                if (match := re_map['mf_fusion'].search(line)): data['mf_fusion_count'] = int(match.group(1))
                if (match := re_map['sss_fusion'].search(line)): data['sss_fusion_count'] = int(match.group(1))
                if (match := re_map['total_fusion'].search(line)): data['total_fusion_count'] = int(match.group(1))
    except FileNotFoundError:
        logging.warning(f"File not found: {filepath}. Skipping.")
    except Exception as e:
        logging.error(f"Could not parse log file {filepath}: {e}")
    return data

def _parse_t_file(filepath: Path) -> dict: # <-- Changed to Path for consistency
    """Extracts multiplication depth from a .t file with enhanced diagnostics."""
    mult_depth = 0
    depth_re = re.compile(r"<<<<<< End SCALEMGR: \[\d+,\s*(\d+)\]")
    try:
        with open(filepath, 'r', encoding='utf-8') as f:
            content = f.read()
        
        last_match = depth_re.findall(content)
        
        if last_match:
            mult_depth = int(last_match[-1])
        else:
            logging.warning(f"Pattern '<<<<<< End SCALEMGR: [...]' not found in {filepath}. Depth will be 0.")
            
    except FileNotFoundError:
        logging.warning(f"File not found: {filepath}. Depth will be 0.")
    except Exception as e:
        logging.error(f"Could not parse t-file {filepath}: {e}")
        
    return {'mult_depth': mult_depth}

# ==============================================================================
# SECTION 2: DATA PROCESSING (UNCHANGED)
# ==============================================================================
# All functions in this section (format_model_name, process_data_for_tables,
# process_data_for_charts) remain exactly the same as the last correct version.

HR_MODELS = ['LeNet-H', 'ResNet20-H', 'VGG11-H', 'MobileNet-H', 'SqueezeNet-H', 'AlexNet-H']
LR_MODELS = ['CryptoNet-L', 'LeNet-L', 'ResNet20-L', 'VGG11-L', 'MobileNet-L', 'SqueezeNet-L', 'AlexNet-L']

def format_model_name(raw_name: str) -> str:
    if 'cryptonet' in raw_name: return "CryptoNet-L"
    name_map = {"lenet": "LeNet", "resnet20_cifar10": "ResNet20", "vgg11_cifar10": "VGG11", "mobilenet_cifar10": "MobileNet", "squeezenet_cifar10": "SqueezeNet", "alexnet_cifar10": "AlexNet"}
    is_l_model = '_ax2' in raw_name
    base_name = raw_name.replace('_ax2', '')
    formatted_name = name_map.get(base_name, base_name.capitalize())
    suffix = "-L" if is_l_model else "-H"
    return f"{formatted_name}{suffix}"

def process_data_for_tables(df: pd.DataFrame) -> dict:
    logging.info("--- Processing parsed data for TABLE generation ---")
    df['Model'] = df['Model_Raw'].apply(format_model_name)
    
    # Table 3: Fusion Counts
    ngraph_fusions = df[df['Optimization'] == 'ncf'][['Model', 'cf_fusion_count']].set_index('Model').rename(columns={'cf_fusion_count': 'nGraph'})
    fhefusion_fusions = df[df['Optimization'] == 'sss.cf.mf'][['Model', 'cf_fusion_count', 'mf_fusion_count', 'sss_fusion_count', 'total_fusion_count']].set_index('Model').rename(columns={'cf_fusion_count': 'CF', 'mf_fusion_count': 'MF', 'sss_fusion_count': 'SF', 'total_fusion_count': 'ALL'})
    df3 = pd.merge(ngraph_fusions, fhefusion_fusions, left_index=True, right_index=True, how='outer').reindex(HR_MODELS + LR_MODELS)
    
    # Table 4: Multiplicative Depths
    opt_map_depth = {'base': 'ANT-ACE', 'ncf': 'nGraph', 'cf': 'CF', 'mf': 'MF', 'sss': 'SF', 'sss.cf.mf': 'ALL'}
    df4_pivot = df.pivot_table(index='Model', columns='Optimization', values='mult_depth', aggfunc='first').rename(columns=opt_map_depth).reindex(HR_MODELS + LR_MODELS)
    df4 = df4_pivot[['ANT-ACE', 'nGraph', 'CF', 'MF', 'SF', 'ALL']]

    # Table 5: Bootstrap Counts
    ant_ace_bs = df[df['Optimization'] == 'base'][['Model', 'bootstrap_count']].set_index('Model').rename(columns={'bootstrap_count': 'ANT-ACE'})
    ngraph_bs = df[df['Optimization'] == 'ncf'][['Model', 'bootstrap_count']].set_index('Model').rename(columns={'bootstrap_count': 'nGraph'})
    fhefusion_bs = df[df['Optimization'] == 'sss.cf.mf'][['Model', 'bootstrap_count']].set_index('Model').rename(columns={'bootstrap_count': 'FHEFusion'})
    df5 = pd.concat([ant_ace_bs, ngraph_bs, fhefusion_bs], axis=1).reindex(HR_MODELS + LR_MODELS)

    # Table 6: Compile Times
    df6_pivot = df.pivot_table(index='Model', columns='Optimization', values='compile_time_s', aggfunc='first').reindex(HR_MODELS + LR_MODELS)
    
    # Create the final DataFrame by explicitly assigning columns from the correct source
    df6 = pd.DataFrame(index=df6_pivot.index)
    df6['ANT-ACE'] = df6_pivot.get('base')
    df6['CF'] = df6_pivot.get('cf')
    df6['MF'] = df6_pivot.get('mf')
    df6['SF'] = df6_pivot.get('sss')
    df6['ALL'] = df6_pivot.get('sss.cf.mf')
    
    # Format data types
    df3 = df3.fillna(0).astype(int)
    df4 = df4.fillna(0).astype(int)
    df5 = df5.fillna(0).astype(int)
    df6 = df6.fillna(0.0).map(lambda x: f"{x:.2f}")

    return {"Table3": df3, "Table4": df4, "Table5": df5, "Table6": df6}


def process_data_for_charts(df: pd.DataFrame) -> dict:
    """
    Calculates speedups from raw data and formats it for bar charts,
    following the precise logic provided for each figure.
    """
    logging.info("--- Processing parsed data for CHART generation ---")
    df['Model'] = df['Model_Raw'].apply(format_model_name)
    
    # 1. Create a pivot table of the raw main_graph times.
    times_df = df.pivot_table(index='Model', columns='Optimization', values='main_graph_time_s', aggfunc='first')
    
    # 2. Get the baseline time series (from the 'base' optimization).
    baseline_times = times_df.get('base')
    if baseline_times is None or baseline_times.isnull().all():
        raise KeyError("Baseline 'base' data is missing or empty. Cannot calculate speedups.")

    # 3. Create an empty DataFrame to store the calculated speedups.
    speedups_df = pd.DataFrame(index=times_df.index)

    # 4. Calculate each speedup column explicitly, one by one, exactly as defined.
    #    This removes any ambiguity from previous implementations.
    #    T_base / T_target
    
    # For Figures 9 & 10
    speedups_df['ANT-ACE'] = 1.0  # Defined as the baseline, speedup is 1.0
    speedups_df['NGRAPH'] = baseline_times / times_df.get('ncf')
    
    # For Figures 11 & 12
    speedups_df['CF'] = baseline_times / times_df.get('cf')
    speedups_df['MF'] = baseline_times / times_df.get('mf')
    speedups_df['SF'] = baseline_times / times_df.get('sss')
    
    # Used in all figures
    speedups_df['FHEFusion'] = baseline_times / times_df.get('sss.cf.mf')
    
    # Handle any potential division by zero or missing data issues by filling NaNs with 1.0
    speedups_df = speedups_df.fillna(1.0)
    
    # 5. Select the correct columns for each figure's data.
    fig9_10_df = speedups_df[['ANT-ACE', 'NGRAPH', 'FHEFusion']]
    fig11_12_df = speedups_df[['CF', 'MF', 'SF', 'FHEFusion']]
    
    # 6. Helper function to extract data lists in the correct model order.
    def get_chart_data(df, models, labels):
        # Reindex to ensure the order is correct and handle any missing models gracefully
        df_ordered = df.reindex(models)
        return [df_ordered[label].tolist() for label in labels]

    # 7. Assemble the final dictionary for plotting.
    chart_data = {
        "Fig9": get_chart_data(fig9_10_df, HR_MODELS, ['ANT-ACE', 'NGRAPH', 'FHEFusion']),
        "Fig10": get_chart_data(fig9_10_df, LR_MODELS, ['ANT-ACE', 'NGRAPH', 'FHEFusion']),
        "Fig11": get_chart_data(fig11_12_df, HR_MODELS, ['CF', 'MF', 'SF', 'FHEFusion']),
        "Fig12": get_chart_data(fig11_12_df, LR_MODELS, ['CF', 'MF', 'SF', 'FHEFusion']),
    }
    return chart_data


# ==============================================================================
# SECTION 3: PLOTTING & TABLE GENERATION (UNCHANGED)
# ==============================================================================
# All functions in this section (plot_table, plot_grouped_bars, generate_all_tables,
# generate_all_charts) remain exactly the same as the last correct version.

BAR_WIDTH = 0.2
FHEFUSION_GROUP_NAME = "FHEFusion"
TABLE3_COL_DEFS = [ColumnDefinition(name="Model",textprops={"ha":"left"},width=0.75), ColumnDefinition(name="nGraph",textprops={"ha":"center"},width=0.75), ColumnDefinition(name="CF",group=FHEFUSION_GROUP_NAME,textprops={"ha":"center"},width=0.6), ColumnDefinition(name="MF",group=FHEFUSION_GROUP_NAME,textprops={"ha":"center"},width=0.6), ColumnDefinition(name="SF",group=FHEFUSION_GROUP_NAME,textprops={"ha":"center"},width=0.6), ColumnDefinition(name="ALL",group=FHEFUSION_GROUP_NAME,textprops={"ha":"center"},width=0.6)]
TABLE4_COL_DEFS = [ColumnDefinition(name="Model",textprops={"ha":"left"},width=1.0), ColumnDefinition(name="ANT-ACE",textprops={"ha":"center"},width=0.8), ColumnDefinition(name="nGraph",textprops={"ha":"center"},width=0.75), ColumnDefinition(name="CF",group=FHEFUSION_GROUP_NAME,textprops={"ha":"center"},width=0.6), ColumnDefinition(name="MF",group=FHEFUSION_GROUP_NAME,textprops={"ha":"center"},width=0.6), ColumnDefinition(name="SF",group=FHEFUSION_GROUP_NAME,textprops={"ha":"center"},width=0.6), ColumnDefinition(name="ALL",group=FHEFUSION_GROUP_NAME,textprops={"ha":"center"},width=0.6)]
TABLE5_COL_DEFS = [ColumnDefinition(name="Model",textprops={"ha":"left"},width=1.2), ColumnDefinition(name="ANT-ACE",textprops={"ha":"center"},width=0.9), ColumnDefinition(name="nGraph",textprops={"ha":"center"},width=0.9), ColumnDefinition(name="FHEFusion",textprops={"ha":"center"},width=1.0)]
TABLE6_COL_DEFS = [ColumnDefinition(name="Model",textprops={"ha":"left"},width=1.0), ColumnDefinition(name="ANT-ACE",textprops={"ha":"center"},width=0.8), ColumnDefinition(name="CF",group=FHEFUSION_GROUP_NAME,textprops={"ha":"center"},width=0.6), ColumnDefinition(name="MF",group=FHEFUSION_GROUP_NAME,textprops={"ha":"center"},width=0.6), ColumnDefinition(name="SF",group=FHEFUSION_GROUP_NAME,textprops={"ha":"center"},width=0.6), ColumnDefinition(name="ALL",group=FHEFUSION_GROUP_NAME,textprops={"ha":"center"},width=0.6)]


def plot_table(df: pd.DataFrame, col_defs: list, output_filename: str, output_dir: Path):
    fig, ax = plt.subplots(figsize=(6, 4))
    if df.empty:
        logging.warning(f"DataFrame for {output_filename} is empty. Skipping plot.")
        plt.close(fig); return
    Table(df, column_definitions=col_defs, ax=ax, index_col=None, textprops={"fontfamily": "Arial", "fontsize": 10}, row_dividers=False, footer_divider=True)
    output_path = output_dir / output_filename
    plt.tight_layout()
    plt.savefig(output_path, dpi=750, format='pdf', bbox_inches='tight')
    plt.close(fig)
    logging.info(f"Table saved to {output_path}")


def plot_table(df: pd.DataFrame, col_defs: list, output_filename: str, output_dir: Path,
               description: str):
    """Generates and saves a styled table from a DataFrame with a description."""
    fig, ax = plt.subplots(figsize=(6, 4))
    if df.empty:
        logging.warning(f"DataFrame for {output_filename} is empty. Skipping plot.")
        plt.close(fig);
        return

    # Add the description text as a figure suptitle
    fig.suptitle(
        description,
        x=0.05,  # Align text to the left of the figure
        y=0.98,  # Position text at the very top
        ha='left',
        fontsize=10,
        fontweight='normal'  # Use normal weight for the description
    )

    Table(
        df,
        column_definitions=col_defs,
        ax=ax,
        index_col=None,
        textprops={"fontfamily": "Arial", "fontsize": 10},
        row_dividers=False,
        footer_divider=True
    )

    header_strings = set()
    for cd in col_defs:
        header_strings.add(cd.name)
        if cd.group:
            header_strings.add(cd.group)

    for artist in ax.get_children():
        if isinstance(artist, Text):
            if artist.get_text() in header_strings:
                artist.set_fontweight("bold")

    output_path = output_dir / output_filename
    # Use a slightly different layout adjustment for suptitle
    plt.tight_layout(rect=[0, 0, 1, 0.95])
    plt.savefig(output_path, dpi=750, format='pdf', bbox_inches='tight');
    plt.close(fig)
    logging.info(f"Table saved to {output_path}")

def plot_grouped_bars(data_groups, model_names, labels, colors, output_dir: Path, file_name: str, ylabel="Speedups", ylim=None, baseline=1.0):
    num_groups = len(data_groups)
    x = np.arange(len(model_names))
    plt.figure(figsize=(max(10, len(model_names) * 1.2), 4))
    for i, group_data in enumerate(data_groups):
        if not isinstance(group_data, list) or not group_data or all(np.isnan(v) for v in group_data):
             logging.warning(f"Empty or all-NaN data for group {labels[i]} in {file_name}. Skipping bar.")
             continue
        plt.bar(x + i * BAR_WIDTH, group_data, width=BAR_WIDTH, label=labels[i], color=colors[i % len(colors)])
    plt.ylabel(ylabel, fontsize=16, fontweight='bold')
    valid_data = [item for sublist in data_groups for item in sublist if isinstance(item, (int, float)) and not np.isnan(item)]
    if ylim: plt.ylim(*ylim)
    elif valid_data: plt.ylim(0, max(valid_data) * 1.2)
    if baseline is not None: plt.axhline(baseline, color='red', linestyle='--')
    plt.xticks(x + BAR_WIDTH * (num_groups - 1) / 2, model_names, rotation=20, fontsize=12, fontweight='bold')
    plt.tick_params(axis='y', labelsize=12)
    for tick in plt.gca().get_yticklabels(): tick.set_fontweight('bold')
    plt.legend(loc='upper right', prop={'size': 13, 'weight': 'bold'}, frameon=False)
    output_path = output_dir / file_name
    plt.tight_layout()
    plt.savefig(output_path, bbox_inches='tight')
    plt.close()
    logging.info(f"Chart saved to {output_path}")


def plot_grouped_bars(data_groups, model_names, labels, colors, output_dir: Path, file_name: str, description: str, ylabel="Speedups", ylim=None, baseline=1.0):
    """Generates and saves a grouped bar chart with a description."""
    num_groups = len(data_groups)
    x = np.arange(len(model_names))
    # Get the current axes object right after creating the figure
    fig, ax = plt.subplots(figsize=(max(10, len(model_names) * 1.2), 4))
    
    for i, group_data in enumerate(data_groups):
        if not isinstance(group_data, list) or not group_data or all(np.isnan(v) for v in group_data):
             logging.warning(f"Empty or all-NaN data for group {labels[i]} in {file_name}. Skipping bar.")
             continue
        ax.bar(x + i * BAR_WIDTH, group_data, width=BAR_WIDTH, label=labels[i], color=colors[i % len(colors)])
    
    ax.set_ylabel(ylabel, fontsize=16, fontweight='bold')
    valid_data = [item for sublist in data_groups for item in sublist if isinstance(item, (int, float)) and not np.isnan(item)]
    if ylim: ax.set_ylim(*ylim)
    elif valid_data: ax.set_ylim(0, max(valid_data) * 1.2)
    if baseline is not None: ax.axhline(baseline, color='red', linestyle='--')
    
    ax.set_xticks(x + BAR_WIDTH * (num_groups - 1) / 2)
    ax.set_xticklabels(model_names, rotation=20, fontsize=12, fontweight='bold')
    
    ax.tick_params(axis='y', labelsize=12)
    for tick in ax.get_yticklabels(): tick.set_fontweight('bold')
    ax.legend(loc='upper right', prop={'size': 13, 'weight': 'bold'}, frameon=False)
    
    # This places the text at 50% of the axes width, and 30% of the axes height *below* the plot area.
    # `transform=ax.transAxes` is the key: it makes coordinates relative to the axes box.
    # `va='top'` makes the positioning more predictable.
    ax.text(
        0.5, -0.3,  # x=center, y is 30% of the axes height BELOW the x-axis
        description,
        ha="center",
        va="top",  # vertical alignment to the top of the text box
        fontsize=10,
        wrap=True,
        transform=ax.transAxes
    )
    
    output_path = output_dir / file_name
    # bbox_inches='tight' will now correctly expand the figure to include the text below
    fig.savefig(output_path, bbox_inches='tight'); plt.close(fig)
    logging.info(f"Chart saved to {output_path}")

def generate_all_tables(table_data: dict, output_dir: Path):
    logging.info("--- Generating Tables from Parsed Data ---")
    # plot_table(table_data["Table3"], TABLE3_COL_DEFS, "Table3.pdf", output_dir)
    # plot_table(table_data["Table4"], TABLE4_COL_DEFS, "Table4.pdf", output_dir)
    # plot_table(table_data["Table5"], TABLE5_COL_DEFS, "Table5.pdf", output_dir)
    # plot_table(table_data["Table6"], TABLE6_COL_DEFS, "Table6.pdf", output_dir)

    plot_table(table_data["Table3"], TABLE3_COL_DEFS, "Table3.pdf", output_dir,
               description=FIGURE_DESCRIPTIONS["Table3"])

    plot_table(table_data["Table4"], TABLE4_COL_DEFS, "Table4.pdf", output_dir,
               description=FIGURE_DESCRIPTIONS["Table4"])

    plot_table(table_data["Table5"], TABLE5_COL_DEFS, "Table5.pdf", output_dir,
               description=FIGURE_DESCRIPTIONS["Table5"])

    plot_table(table_data["Table6"], TABLE6_COL_DEFS, "Table6.pdf", output_dir,
               description=FIGURE_DESCRIPTIONS["Table6"])

def generate_all_charts(chart_data: dict, output_dir: Path):
    logging.info("--- Generating Charts from Parsed Data ---")
    anf_config = {"labels": ['ANT-ACE', 'NGRAPH', 'FHEFusion'], "colors": ['#6C8EBF', '#CDEB8B', '#FFCC99']}
    ablation_config = {"labels": ['CF', 'MF', 'SF', 'FHEFusion'], "colors": ['#1F77B4', '#2CA02C', '#9673A6', '#FFCC99']}
    # plot_grouped_bars(chart_data["Fig9"], HR_MODELS, **anf_config, output_dir=output_dir, file_name="Figure9.pdf", ylim=(0.8, 3.5))
    # plot_grouped_bars(chart_data["Fig10"], LR_MODELS, **anf_config, output_dir=output_dir, file_name="Figure10.pdf", ylim=(0.8, 3.5))
    # plot_grouped_bars(chart_data["Fig11"], HR_MODELS, **ablation_config, output_dir=output_dir, file_name="Figure11.pdf", ylim=(0.8, 3.5))
    # plot_grouped_bars(chart_data["Fig12"], LR_MODELS, **ablation_config, output_dir=output_dir, file_name="Figure12.pdf", ylim=(0.8, 3.5))
    plot_grouped_bars(chart_data["Fig9"], HR_MODELS, **anf_config, output_dir=output_dir,
                      file_name="Figure9.pdf",
                      description=CHART_DESCRIPTIONS["Fig9"], ylim=(0.8, 3.5))

    plot_grouped_bars(chart_data["Fig10"], LR_MODELS, **anf_config, output_dir=output_dir,
                      file_name="Figure10.pdf",
                      description=CHART_DESCRIPTIONS["Fig10"], ylim=(0.8, 3.5))

    plot_grouped_bars(chart_data["Fig11"], HR_MODELS, **ablation_config, output_dir=output_dir,
                      file_name="Figure11.pdf",
                      description=CHART_DESCRIPTIONS["Fig11"], ylim=(0.8, 3.5))

    plot_grouped_bars(chart_data["Fig12"], LR_MODELS, **ablation_config, output_dir=output_dir,
                      file_name="Figure12.pdf",
                      description=CHART_DESCRIPTIONS["Fig12"], ylim=(0.8, 3.5))

# ==============================================================================
# SECTION 4: MAIN EXECUTION BLOCK
# ==============================================================================

def main():
    logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')
    parser = argparse.ArgumentParser(description="Parses log data and generates all figures and tables.")
    
    parser.add_argument('-o', '--output-dir', type=Path, default=Path('/app/ae_result'),
                        help='Directory to save output files. Defaults to "/app/ae_result"')
    parser.add_argument('-d', '--data-dir', type=Path, default=Path('/app/ae_result/fhefusion'), 
                        help='Directory containing the log and t files. Defaults to the /app/ae_result/fhefusion directory.')
    args = parser.parse_args()
    
    output_dir = args.output_dir
    data_dir = args.data_dir # Use the parsed argument

    logging.info(f"Output will be saved to: {output_dir}")
    output_dir.mkdir(parents=True, exist_ok=True)

    try:
        raw_df = run_parser(data_dir)

        table_data = process_data_for_tables(raw_df)
        chart_data = process_data_for_charts(raw_df)
        generate_all_tables(table_data, output_dir)
        generate_all_charts(chart_data, output_dir)
        logging.info("All figures and tables have been generated successfully.")

    except Exception as e:
        logging.error(f"An error occurred during script execution: {e}")
        import traceback
        traceback.print_exc()

if __name__ == "__main__":
    main()


