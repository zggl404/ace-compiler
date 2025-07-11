import matplotlib.pyplot as plt
import numpy as np
import os
import shlex
from matplotlib.font_manager import FontProperties
from plottable import ColumnDefinition, Table
import pandas as pd
from typing import List, Tuple, Set, Union

# setup font
font = FontProperties()
font.set_family('serif')


def _plot_generic_table(
        df: pd.DataFrame,
        column_definitions: List[ColumnDefinition],
        output_filename: str,
        output_dir: str,
        figsize: Tuple[int, int],
        row_dividers: Union[bool, Set[int]]
):
    """
    A generic core function responsible for plotting and saving any plottable-based table.

    Args:
        df: The DataFrame to plot.
        column_definitions: The column definitions for the table.
        output_filename: The output filename (e.g., "Table4.pdf").
        output_dir: The output directory.
        figsize: The figure size.
        row_dividers: Controls the row dividers. Can be a boolean or a set of row indices.
    """
    fig, ax = plt.subplots(figsize=figsize)

    Table(
        df,
        column_definitions=column_definitions,
        ax=ax,
        textprops={"fontfamily": "Arial", "fontsize": 10},
        row_dividers=row_dividers,  # Use the passed-in argument directly
        footer_divider=True
    )

    # Create the output directory if it doesn't exist
    os.makedirs(output_dir, exist_ok=True)
    output_path = os.path.join(output_dir, output_filename)

    plt.tight_layout()
    plt.savefig(output_path, dpi=750, format='pdf', bbox_inches='tight')
    print(f"Table chart saved to: {output_path}")
    # plt.show()


def plot_table_chart45(
    df: pd.DataFrame,
    output_filename: str = "tablex.pdf",
    output_dir: str = "plots"
):
    """Generates charts for Table 4 and 5."""
    group1_name = "FHELIPE"
    group2_name = "MKR"
    # MKR Column definitions Table 4 5
    col_defs = [
        ColumnDefinition(
            name="Kernel",
            textprops={"ha": "left"},
            width=0.75,
        ),
        ColumnDefinition(
            name="Slot Util.",
            group=group1_name,
            textprops={"ha": "center"},
            width=0.6,
        ),
        ColumnDefinition(
            name="Rotations",
            group=group1_name,
            textprops={"ha": "center"},
            width=0.6,
        ),
        ColumnDefinition(
            name="Time (secs)",
            group=group1_name,
            textprops={"ha": "center"},
            width=0.6,
        ),

        ColumnDefinition(
            name="Slot Util.2",
            title="Slot Util.",
            group=group2_name,
            textprops={"ha": "center"},
            width=0.6,
        ),
        ColumnDefinition(
            name="Rotations2",
            title="Rotations",
            group=group2_name,
            textprops={"ha": "center"},
            width=0.6,
        ),
        ColumnDefinition(
            name="Time (secs)2",
            title="Time (secs)",
            group=group2_name,
            textprops={"ha": "center"},
            width=0.6,
        ),
        ColumnDefinition(
            name="Speedup",
            group=group2_name,
            textprops={"ha": "center"},
            width=0.6,
        ),
    ]

    _plot_generic_table(
        df=df,
        column_definitions=col_defs,
        output_filename=output_filename,
        output_dir=output_dir,
        figsize=(6, 3),
        row_dividers=False
    )

def plot_table_chart6(
    df: pd.DataFrame,
    output_filename: str = "tablex.pdf",
    output_dir: str = "plots"
):
    """Generates charts for Table 6."""
    group1_name = "FHELIPE"
    group2_name = "BSGS"
    group3_name = "MKR"
    # MKR Column definitions Table 6
    col_defs = [
        ColumnDefinition(
            name="Kernel",
            textprops={"ha": "left"},
            width=0.75,
        ),
        ColumnDefinition(
            name="Slot Util.",
            group=group1_name,
            textprops={"ha": "center"},
            width=0.6,
        ),
        ColumnDefinition(
            name="Rotations",
            group=group1_name,
            textprops={"ha": "center"},
            width=0.6,
        ),
        ColumnDefinition(
            name="Time (secs)",
            group=group1_name,
            textprops={"ha": "center"},
            width=0.6,
        ),

        ColumnDefinition(
            name="Slot Util.2",
            title="Slot Util.",
            group=group2_name,
            textprops={"ha": "center"},
            width=0.6,
        ),
        ColumnDefinition(
            name="Rotations2",
            title="Rotations",
            group=group2_name,
            textprops={"ha": "center"},
            width=0.6,
        ),
        ColumnDefinition(
            name="Time (secs)2",
            title="Time (secs)",
            group=group2_name,
            textprops={"ha": "center"},
            width=0.6,
        ),
        ColumnDefinition(
            name="Slot Util.3",
            title="Slot Util.",
            group=group3_name,
            textprops={"ha": "center"},
            width=0.6,
        ),
        ColumnDefinition(
            name="Rotations3",
            title="Rotations",
            group=group3_name,
            textprops={"ha": "center"},
            width=0.6,
        ),
        ColumnDefinition(
            name="Time (secs)3",
            title="Time (secs)",
            group=group3_name,
            textprops={"ha": "center"},
            width=0.6,
        ),
        ColumnDefinition(
            name="Speedup (FHELIPE)",
            group=group3_name,
            textprops={"ha": "center"},
            width=0.6,
        ),
        ColumnDefinition(
            name="Speedup (BSGS)",
            group=group3_name,
            textprops={"ha": "center"},
            width=0.6,
        ),
    ]

    _plot_generic_table(
        df=df,
        column_definitions=col_defs,
        output_filename=output_filename,
        output_dir=output_dir,
        figsize=(15, 3),
        row_dividers=False
    )


def plot_table_chart7(
    df: pd.DataFrame,
    output_filename: str = "tablex.pdf",
    output_dir: str = "plots"
):
    """Generates the chart for Table 7, with specific row dividers."""

    table_group1 = "FHELIPE (secs)"
    table_group2 = "MKR (secs)"

    # TODO: should be same with columns in get_data7 in figure_generators.py
    columns = [
        ('Models'),
        ('compiletime'),
        ('conv'),
        ('mvm'),
        ('total'),
        ('compiletime2'),
        ('conv2'),
        ('mvm2'),
        ('total2'),
        ('Speedup')
    ]

    titles = [
        ('Models'),
        ('Compile-Time (secs)'),
        (''),
        ('Runtime (secs)'),
        (''),
        ('Compile-Time (secs)'),
        (''),
        ('Runtime (secs)'),
        (''),
        ('Speedup')
    ]

    table_col_defs = [
        ColumnDefinition(
            name=columns[0], title=titles[0], textprops={"ha": "left"}, width=0.75,
        ),
        ColumnDefinition(
            name=columns[1], title=titles[1], group=table_group1, textprops={"ha": "right"},
            width=1.0,
        ),
        ColumnDefinition(
            name=columns[2], title=titles[2], group=table_group1, textprops={"ha": "right"},
            width=0.6,
        ),
        ColumnDefinition(
            name=columns[3], title=titles[3], group=table_group1, textprops={"ha": "right"},
            width=0.6,
        ),
        ColumnDefinition(
            name=columns[4], title=titles[4], group=table_group1, textprops={"ha": "right"},
            width=0.6,
        ),

        ColumnDefinition(
            name=columns[5], title=titles[5], group=table_group2, textprops={"ha": "right"},
            width=1.0,
        ),
        ColumnDefinition(
            name=columns[6], title=titles[6], group=table_group2, textprops={"ha": "right"},
            width=0.6,
        ),
        ColumnDefinition(
            name=columns[7], title=titles[7], group=table_group2, textprops={"ha": "right"},
            width=0.6,
        ),
        ColumnDefinition(
            name=columns[8], title=titles[8], group=table_group2, textprops={"ha": "right"},
            width=0.6,
        ),

        ColumnDefinition(
            name=columns[9], title=titles[9], textprops={"ha": "right"}, width=0.6,
        ),
    ]

    _plot_generic_table(
        df=df,
        column_definitions=table_col_defs,
        output_filename=output_filename,
        output_dir=output_dir,
        figsize=(12, 3),
        row_dividers={2}
    )


def plot_table_chart8(
    df: pd.DataFrame,
    output_filename: str = "tablex.pdf",
    output_dir: str = "plots"
):
    """Generates the chart for Table 8."""
    table_col_defs = [
        ColumnDefinition(
            name="Kernel",
            textprops={"ha": "left"},
            width=0.75,
        ),
        ColumnDefinition(
            name="P_I",
            title="$P_I$",
            group="Tensor Partitioning",
            textprops={"ha": "center"},
            width=0.6,
        ),
        ColumnDefinition(
            name="P_O",
            title="$P_O$",
            group="Tensor Partitioning",
            textprops={"ha": "center"},
            width=0.6,
        ),
        ColumnDefinition(
            name="Search Space",
            group="Optimal Blocking (Equation (11))",
            textprops={"ha": "center"},
            width=0.6,
        ),
        ColumnDefinition(
            name="P_b",
            title="$P_b$",
            group="Optimal Blocking (Equation (11))",
            textprops={"ha": "center"},
            width=0.3,
        ),
        ColumnDefinition(
            name="P_s",
            title="$P_s$",
            group="Optimal Blocking (Equation (11))",
            textprops={"ha": "center"},
            width=0.3,
        ),
        ColumnDefinition(
            name="bs^opt",
            title="$bs^{opt}$",
            group="Optimal Blocking (Equation (11))",
            textprops={"ha": "center"},
            width=0.3,
        ),
    ]

    _plot_generic_table(
        df=df,
        column_definitions=table_col_defs,
        output_filename=output_filename,
        output_dir=output_dir,
        figsize=(6, 3),
        row_dividers=False
    )


# TODO: need to generalize this method, currently only used for MKR ae
def plot_run_time_chart(
        category_labels: list,
        series1_data_part1: list,
        series2_data_part1: list,
        series1_data_part2: list,
        series2_data_part2: list,
        series1_name_part1: str,
        series2_name_part1: str,
        series1_name_part2: str,
        series2_name_part2: str,
        title: str = "Comparison of xx Times",
        y_axis_label: str = "Comp. Time (secs, log10 scale)",
        output_filename: str = "time_comparison.png",
        output_dir: str = "plots"
):
    if not all(isinstance(x, (int, float)) for x in
               series1_data_part1 + series2_data_part1 + series1_data_part2 + series2_data_part2):
        print("Error: series1_data and series2_data must contain only numbers.")
        return
    if not len(category_labels) == len(series1_data_part1) == len(series2_data_part1) == len(
            series1_data_part2) == len(series2_data_part2):
        print("Error: All data lists must have the same length.")
        return

    # Set bar width and position
    bar_width = 0.35
    x = np.arange(len(category_labels))  # x-axis positions

    # Create the figure and axes
    fig, ax = plt.subplots(figsize=(12, 3))

    # Plot Fhelipe's stacked bar chart
    bars1 = ax.bar(x - bar_width / 2, series1_data_part1, bar_width, label=series1_name_part1,
                   color='#4C72B0')
    ax.bar(x - bar_width / 2, series1_data_part2, bar_width, bottom=series1_data_part1,
           label=series1_name_part2,
           color='#55A868')

    # Plot MKR's stacked bar chart
    bars2 = ax.bar(x + bar_width / 2, series2_data_part1, bar_width, label=series2_name_part1,
                   color='#DD8452')
    ax.bar(x + bar_width / 2, series2_data_part2, bar_width, bottom=series2_data_part1,
           label=series2_name_part2,
           color='#C44E52')

    # Dynamically adjust Y-axis range
    max_value = max([sum(pair) for pair in zip(series1_data_part1, series1_data_part2)] +
                    [sum(pair) for pair in zip(series2_data_part1, series2_data_part2)])
    y_limit = max_value * 1.15  # Leave 10% empty space
    ax.set_ylim(0, y_limit)

    # Add labels, title, and legend
    # Set X and Y axis labels to bold
    # ax.set_xlabel('Models', fontsize=12, fontweight='bold')  # Make X-axis label bold
    ax.set_ylabel(y_axis_label, fontsize=11, fontweight='bold')  # Make Y-axis label bold

    # Set X-axis ticks
    ax.set_xticks(x)
    ax.set_xticklabels(category_labels, rotation=0, ha='center', fontsize=10, fontweight='bold')

    # Legend: change to horizontal layout
    ax.legend(fontsize=10, ncol=4, loc='upper center', bbox_to_anchor=(0.5, 1.2),
              frameon=False, prop={'weight': 'bold'})  # horizontal layout, 4 columns

    # Remove top and right spines
    # ax.spines['top'].set_visible(False)  # Remove top spine
    # ax.spines['right'].set_visible(False)  # Remove right spine

    # Add value labels
    def add_labels(bars, tops):
        for bar, top in zip(bars, tops):
            height = bar.get_height() + top
            ax.annotate(f'{height:.2f}',
                        xy=(bar.get_x() + bar.get_width() / 2, height),
                        xytext=(0, 2),  # Reduce vertical offset
                        textcoords="offset points",
                        ha='center', va='bottom', fontproperties=font, fontsize=10)

    # Add total value labels
    add_labels(bars1, series1_data_part2)
    add_labels(bars2, series2_data_part2)

    # Adjust layout
    plt.tight_layout()

    # create output directory(if not exist)
    os.makedirs(output_dir, exist_ok=True)
    output_path = os.path.join(output_dir, output_filename)

    # save as pdf file
    plt.savefig(output_path, dpi=750, format='pdf', bbox_inches='tight')

    # Show plot
    # plt.show()


# TODO: need to generalize this method, currently only used for MKR ae
def plot_compile_time_chart(
        category_labels: list,
        series1_data: list,
        series2_data: list,
        series1_name: str,
        series2_name: str,
        title: str = "Comparison of xx Times",
        y_axis_label: str = "Comp. Time (secs, log10 scale)",
        output_filename: str = "time_comparison.png",
        output_dir: str = "plots"
):
    if not all(isinstance(x, (int, float)) for x in series1_data + series2_data):
        print("Error: series1_data and series2_data must contain only numbers.")
        return
    if not len(category_labels) == len(series1_data) == len(series2_data):
        print("Error: All data lists must have the same length.")
        return

    # Set bar width and position
    bar_width = 0.43
    x = np.arange(len(category_labels))  # x-axis positions

    # Create the figure and axes
    fig, ax = plt.subplots(figsize=(12, 3.28))

    # Plot the bar chart
    bars1 = ax.bar(x - bar_width / 2, series1_data, bar_width, label=series1_name, color='#4C72B0')
    bars2 = ax.bar(x + bar_width / 2, series2_data, bar_width, label=series2_name, color='#DD8452')

    # Set Y-axis to log scale and adjust range
    ax.set_yscale('log')  # Use log scale
    ax.set_ylim(0.1, max(max(series1_data),
                         max(series2_data)) * 5)  # Set reasonable upper and lower limits

    # Add labels, title, and legend
    # ax.set_ylabel('Comp. Time (secs, $boldmath{\log_{10}}$ scale)', fontsize=10, fontweight='bold')  # Make Y-axis label bold
    ax.set_ylabel(y_axis_label, fontsize=11, fontweight='bold')

    # Set X-axis ticks
    ax.set_xticks(x)
    ax.set_xticklabels(category_labels, rotation=30, ha='right', fontsize=10, fontweight='bold')

    # Legend: change to horizontal layout
    ax.legend(fontsize=10, ncol=2, loc='upper center', bbox_to_anchor=(0.5, 1.2),
              frameon=False, prop={'weight': 'bold'})  # horizontal layout, 2 columns

    # Add value labels
    def add_labels(bars):
        for i, bar in enumerate(bars):
            height = bar.get_height()
            if height < 0.01:  # Small values: place label inside the bar, rotated
                offset = -0.05 * max(series1_data + series2_data)  # Dynamic offset
                # Slightly shift the label of the leftmost bar to the right
                horizontal_offset = 0.0 if i == 0 else 0
                ax.annotate(f'{height:.2f}',
                            xy=(
                            bar.get_x() + bar.get_width() / 2 + horizontal_offset, height + offset),
                            xytext=(0, 0),
                            textcoords="offset points",
                            ha='center', va='bottom', fontproperties=font, fontsize=10,
                            rotation=90, color='white')  # Rotate label, use white font
            elif height > 100:  # Large values: label near the top of the bar, slightly offset
                ax.annotate(f'{height:.2f}',
                            xy=(bar.get_x() + bar.get_width() / 2, height),
                            xytext=(0, 3),  # Slight vertical offset
                            textcoords="offset points",
                            ha='center', va='bottom', fontproperties=font, fontsize=10)
            else:  # Medium values: place label directly on top of the bar
                ax.annotate(f'{height:.2f}',
                            xy=(bar.get_x() + bar.get_width() / 2, height),
                            xytext=(0, 2),  # Slightly closer to the bar
                            textcoords="offset points",
                            ha='center', va='bottom', fontproperties=font, fontsize=10)

    add_labels(bars1)
    add_labels(bars2)

    # Adjust layout
    plt.tight_layout()

    # Create output directory (if it doesn't exist)
    os.makedirs(output_dir, exist_ok=True)
    output_path = os.path.join(output_dir, output_filename)

    # Save as PDF file
    plt.savefig(output_path, dpi=750, format='pdf', bbox_inches='tight')
    print(f"The chart has been saved to: {output_path}")

    # Show plot
    # plt.show()


if __name__ == "__main__":
    comp_category_labels = [
        "Conv1", "Conv2", "Conv3", "Conv4",
        "Conv1_Large", "Conv2_Large", "Conv3_Large", "Conv4_Large",
        "MVM1", "MVM2"
    ]

    comp_series1_data = [
        1.55, 3.06, 2.88, 2.72,
        21.85, 21.76, 20.48, 19.38,
        10.48, 882.63
    ]

    comp_series2_data = [
        0.20, 0.27, 0.24, 0.21,
        3.56, 3.01, 3.22, 2.41,
        86.57, 573.31
    ]

    plot_compile_time_chart(
        category_labels=comp_category_labels,
        series1_data=comp_series1_data,
        series2_data=comp_series2_data,
        series1_name="Fhelipe",
        series2_name="MKR",
        title="Comparison of Times",
        y_axis_label="Comp. Time (secs, $\mathbf{log}_{\mathbf{10}}$ scale)",
        output_filename="compile_time_comparison.pdf",
        output_dir="generated_plots"
    )

    run_category_labels = ['ResNet20', 'SqueezeNet', 'AlexNet', 'VGG11']

    fhelipe_conv = [457.64, 1301.67, 7950.07, 3965.14]
    mkr_conv = [107.05, 240.92, 78.38, 66.82]

    fhelipe_mvm = [0.758, 0.63, 3164.95, 0.8]
    mkr_mvm = [1.23, 3.17, 55.72, 4.91]

    plot_run_time_chart(
        run_category_labels,
        fhelipe_conv,
        mkr_conv,
        fhelipe_mvm,
        mkr_mvm,
        series1_name_part1="Fhelipe(Conv)",
        series2_name_part1="MKR(Conv)",
        series1_name_part2="Fhelipe(MVM)",
        series2_name_part2="MKR(MVM)",
        title="Comparison of Times",
        y_axis_label="Execution Time (secs)",
        output_filename="model-conv-mvm.pdf",
        output_dir="generated_plots"
    )
