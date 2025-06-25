import matplotlib.pyplot as plt
import numpy as np
import os
import shlex
from matplotlib.font_manager import FontProperties
from plottable import ColumnDefinition, Table
import pandas as pd

# setup font
font = FontProperties()
font.set_family('serif')
font.set_name('Helvetica')


table456_group1_name="Fhelipe"
table456_group2_name="MKR"
# MKR Column definitions Table 4 5 6
table456_col_defs = [
    ColumnDefinition(
        name="Kernel",
        textprops={"ha": "left"},
        width=0.75,
    ),
    ColumnDefinition(
        name="Slot Util.",
        group=table456_group1_name,
        textprops={"ha": "center"},
        width=0.6,
    ),
    ColumnDefinition(
        name="Rotations",
        group=table456_group1_name,
        textprops={"ha": "center"},
        width=0.6,
    ),
    ColumnDefinition(
        name="Time (secs)",
        group=table456_group1_name,
        textprops={"ha": "center"},
        width=0.6,
    ),
    
    ColumnDefinition(
        name="Slot Util.2",
        title="Slot Util.",
        group=table456_group2_name,
        textprops={"ha": "center"},
        width=0.6,
    ),
    ColumnDefinition(
        name="Rotations2",
        title="Rotations",
        group=table456_group2_name,
        textprops={"ha": "center"},
        width=0.6,
    ),
    ColumnDefinition(
        name="Time (secs)2",
        title="Time (secs)",
        group=table456_group2_name,
        textprops={"ha": "center"},
        width=0.6,
    ),
    ColumnDefinition(
        name="Speedup",
        group=table456_group2_name,
        textprops={"ha": "center"},
        width=0.6,
    ),
]

table7_group1="Fhelipe (secs)"
table7_group2="MKR (secs)"

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


# Column definitions Table 7
table7_col_defs = [
    ColumnDefinition(
        name=columns[0], title=titles[0], textprops={"ha": "left"}, width=0.75,
    ),
    ColumnDefinition(
        name=columns[1], title=titles[1], group=table7_group1, textprops={"ha": "right"}, width=1.0,
    ),
    ColumnDefinition(
        name=columns[2], title=titles[2], group=table7_group1, textprops={"ha": "right"}, width=0.6,
    ),
    ColumnDefinition(
        name=columns[3], title=titles[3], group=table7_group1, textprops={"ha": "right"}, width=0.6,
    ),
    ColumnDefinition(
        name=columns[4], title=titles[4], group=table7_group1, textprops={"ha": "right"}, width=0.6,
    ),
    
    ColumnDefinition(
        name=columns[5], title=titles[5], group=table7_group2, textprops={"ha": "right"}, width=1.0,
    ),
    ColumnDefinition(
        name=columns[6], title=titles[6], group=table7_group2, textprops={"ha": "right"}, width=0.6,
    ),
    ColumnDefinition(
        name=columns[7], title=titles[7], group=table7_group2, textprops={"ha": "right"}, width=0.6,
    ),
    ColumnDefinition(
        name=columns[8], title=titles[8], group=table7_group2, textprops={"ha": "right"}, width=0.6,
    ),
    
    ColumnDefinition(
        name=columns[9], title=titles[9], textprops={"ha": "right"}, width=0.6,
    ),
]


table8_col_defs = [
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


# TODO: need to generalize this method(merge with plot_table_chart7), currently only used for MKR ae
def plot_table_chart456(
    df: pd.DataFrame,
    output_filename: str = "tablex.pdf",
    output_dir: str = "plots"
):
    fig, ax = plt.subplots(figsize=(6, 3))
    tab = Table(df, column_definitions=table456_col_defs, ax=ax,
            textprops={"fontfamily": "Arial", "fontsize": 10},
            row_dividers=False, footer_divider=True)

    # create output directory(if not exist)
    os.makedirs(output_dir, exist_ok=True)
    output_path = os.path.join(output_dir, output_filename)

    plt.tight_layout()
    plt.savefig(output_path, dpi=750, format='pdf', bbox_inches='tight')
    
    # 显示图表
    # plt.show()

# TODO: need to generalize this method(merge with plot_table_chart456), currently only used for MKR ae
def plot_table_chart7(
    df: pd.DataFrame,
    output_filename: str = "tablex.pdf",
    output_dir: str = "plots"
):
    # Create the figure and table
    fig, ax = plt.subplots(figsize=(12, 3))
    tab = Table(df, column_definitions=table7_col_defs, ax=ax,
            textprops={"fontfamily": "Arial", "fontsize": 10},
            row_dividers=True, footer_divider=True)

    tab.row_dividers = {2}

    # create output directory(if not exist)
    os.makedirs(output_dir, exist_ok=True)
    output_path = os.path.join(output_dir, output_filename)

    plt.tight_layout()
    plt.savefig(output_path, dpi=750, format='pdf', bbox_inches='tight')
    
    # 显示图表
    # plt.show()


# TODO: need to generalize this method(merge with plot_table_chart7), currently only used for MKR ae
def plot_table_chart8(
    df: pd.DataFrame,
    output_filename: str = "tablex.pdf",
    output_dir: str = "plots"
):

    fig, ax = plt.subplots(figsize=(6, 3))
    tab = Table(df, column_definitions=table8_col_defs, ax=ax,
            textprops={"fontfamily": "Arial", "fontsize": 10},
            row_dividers=False, footer_divider=True)

    # create output directory(if not exist)
    os.makedirs(output_dir, exist_ok=True)
    output_path = os.path.join(output_dir, output_filename)

    plt.tight_layout()
    plt.savefig(output_path, dpi=750, format='pdf', bbox_inches='tight')
    
    # 显示图表
    # plt.show()


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
    if not all(isinstance(x, (int, float)) for x in series1_data_part1 + series2_data_part1 + series1_data_part2 + series2_data_part2):
        print("Error: series1_data and series2_data must contain only numbers.")
        return
    if not len(category_labels) == len(series1_data_part1) == len(series2_data_part1) == len(series1_data_part2) == len(series2_data_part2):
        print("Error: All data lists must have the same length.")
        return

    # 设置柱状图宽度和位置
    bar_width = 0.35
    x = np.arange(len(category_labels))  # x 轴位置

    # 创建图表
    fig, ax = plt.subplots(figsize=(12, 3))

    fhelipe_conv = [457.64, 1301.67, 7950.07, 3965.14]
    mkr_conv = [107.05, 240.92, 78.38, 66.82]

    fhelipe_mvm = [0.758, 0.63, 3164.95, 0.8]
    mkr_mvm = [1.23, 3.17, 55.72, 4.91]

    # 绘制 Fhelipe 的堆叠柱状图
    bars1 = ax.bar(x - bar_width / 2, series1_data_part1, bar_width, label=series1_name_part1,
                   color='#4C72B0')
    ax.bar(x - bar_width / 2, series1_data_part2, bar_width, bottom=series1_data_part1, label=series1_name_part2,
           color='#55A868')

    # 绘制 MKR 的堆叠柱状图
    bars2 = ax.bar(x + bar_width / 2, series2_data_part1, bar_width, label=series2_name_part1, color='#DD8452')
    ax.bar(x + bar_width / 2, series2_data_part2, bar_width, bottom=series2_data_part1, label=series2_name_part2,
           color='#C44E52')

    # 动态调整 Y 轴范围
    max_value = max([sum(pair) for pair in zip(series1_data_part1, series1_data_part2)] +
                    [sum(pair) for pair in zip(series2_data_part1, series2_data_part2)])
    y_limit = max_value * 1.15  # 留出 10% 的空白空间
    ax.set_ylim(0, y_limit)

    # 添加标签、标题和图例
    # 设置 X 轴和 Y 轴标签为粗体
    # ax.set_xlabel('Models', fontsize=12, fontweight='bold')  # X 轴标签加粗
    ax.set_ylabel(y_axis_label, fontsize=11, fontweight='bold')  # Y 轴标签加粗

    # 设置 X 轴刻度
    ax.set_xticks(x)
    ax.set_xticklabels(category_labels, rotation=0, ha='center', fontsize=10, fontweight='bold')

    # 图例：改为水平排列
    ax.legend(fontsize=10, ncol=4, loc='upper center', bbox_to_anchor=(0.5, 1.2),
              frameon=False, prop={'weight': 'bold'})  # 水平排列，4 列

    # 去掉上方和右边的边框线
    # ax.spines['top'].set_visible(False)  # 去掉顶部边框
    # ax.spines['right'].set_visible(False)  # 去掉右侧边框

    # 添加数值标签
    def add_labels(bars, tops):
        for bar, top in zip(bars, tops):
            height = bar.get_height() + top
            ax.annotate(f'{height:.2f}',
                        xy=(bar.get_x() + bar.get_width() / 2, height),
                        xytext=(0, 2),  # 减少垂直偏移量
                        textcoords="offset points",
                        ha='center', va='bottom', fontproperties=font, fontsize=10)

    # 添加总数值标签
    add_labels(bars1, fhelipe_mvm)
    add_labels(bars2, mkr_mvm)

    # 调整布局
    plt.tight_layout()

    # create output directory(if not exist)
    os.makedirs(output_dir, exist_ok=True)
    output_path = os.path.join(output_dir, output_filename)

    # save as pdf file
    plt.savefig(output_path, dpi=750, format='pdf', bbox_inches='tight')

    # 显示图表
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

    # 设置柱状图宽度和位置
    bar_width = 0.43
    x = np.arange(len(category_labels))  # x 轴位置

    # 创建图表
    fig, ax = plt.subplots(figsize=(12, 3.28))

    # 绘制柱状图
    bars1 = ax.bar(x - bar_width / 2, series1_data, bar_width, label=series1_name, color='#4C72B0')
    bars2 = ax.bar(x + bar_width / 2, series2_data, bar_width, label=series2_name, color='#DD8452')

    # 设置 Y 轴为对数坐标，并调整范围
    ax.set_yscale('log')  # 使用对数刻度
    ax.set_ylim(0.1, max(max(series1_data), max(series2_data)) * 5)  # 设置合理的上下限

    # 添加标签、标题和图例
    # ax.set_ylabel('Comp. Time (secs, $boldmath{\log_{10}}$ scale)', fontsize=10, fontweight='bold')  # Y 轴标签加粗
    ax.set_ylabel(y_axis_label, fontsize=11, fontweight='bold')

    # 设置 X 轴刻度
    ax.set_xticks(x)
    ax.set_xticklabels(category_labels, rotation=30, ha='right', fontsize=10, fontweight='bold')

    # 图例：改为水平排列
    ax.legend(fontsize=10, ncol=2, loc='upper center', bbox_to_anchor=(0.5, 1.2),
              frameon=False, prop={'weight': 'bold'})  # 水平排列，2 列

    # 添加数值标签
    def add_labels(bars):
        for i, bar in enumerate(bars):
            height = bar.get_height()
            if height < 0.01:  # 小值：标签放入柱子内部，旋转显示
                offset = -0.05 * max(series1_data + series2_data)  # 动态偏移量
                # 最左边的柱子标签稍微向右偏移
                horizontal_offset = 0.0 if i == 0 else 0
                ax.annotate(f'{height:.2f}',
                            xy=(bar.get_x() + bar.get_width() / 2 + horizontal_offset, height + offset),
                            xytext=(0, 0),
                            textcoords="offset points",
                            ha='center', va='bottom', fontproperties=font, fontsize=10,
                            rotation=90, color='white')  # 旋转标签，使用白色字体
            elif height > 100:  # 大值：标签靠近柱顶，稍微偏移
                ax.annotate(f'{height:.2f}',
                            xy=(bar.get_x() + bar.get_width() / 2, height),
                            xytext=(0, 3),  # 少量垂直偏移
                            textcoords="offset points",
                            ha='center', va='bottom', fontproperties=font, fontsize=10)
            else:  # 中等值：标签直接放在柱顶
                ax.annotate(f'{height:.2f}',
                            xy=(bar.get_x() + bar.get_width() / 2, height),
                            xytext=(0, 2),  # 稍微靠近柱子
                            textcoords="offset points",
                            ha='center', va='bottom', fontproperties=font, fontsize=10)

    add_labels(bars1)
    add_labels(bars2)

    # 调整布局
    plt.tight_layout()

    # 创建输出目录（如果不存在）
    os.makedirs(output_dir, exist_ok=True)
    output_path = os.path.join(output_dir, output_filename)

    # 保存为 PDF 文件
    plt.savefig(output_path, dpi=750, format='pdf', bbox_inches='tight')
    print(f"图表已保存到: {output_path}")

    # 显示图表
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

    series1_data_part1 = [457.64, 1301.67, 7950.07, 3965.14]
    series2_data_part1 = [107.05, 240.92, 78.38, 66.82]

    series1_data_part2 = [0.758, 0.63, 3164.95, 0.8]
    series2_data_part2 = [1.23, 3.17, 55.72, 4.91]

    plot_run_time_chart(
            run_category_labels,
            series1_data_part1,
            series2_data_part1,
            series1_data_part2,
            series2_data_part2,
            series1_name_part1="Fhelipe(Conv)",
            series2_name_part1="MKR(Conv)",
            series1_name_part2="Fhelipe(MVM)",
            series2_name_part2="MKR(MVM)",
            title="Comparison of Times",
            y_axis_label="Execution Time (secs)",
            output_filename="model-conv-mvm.pdf",
            output_dir="generated_plots"
    )
