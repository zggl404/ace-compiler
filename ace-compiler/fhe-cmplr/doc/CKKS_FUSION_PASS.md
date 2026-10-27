# CKKS_FUSION_PASS Design for Phantom GPU and ResNet-Style Models

## Goal

This document refines Scheme B:

- add a standalone `CKKS_FUSION_PASS`
- place it after `CKKS_PASS` and before `POLY2C_PASS`
- keep the active Phantom path in CKKS IR
- discover CKKS macro-ops and lower them to backend-specific fused runtime APIs

The design is not limited to `lenet`. The main optimization target is the ResNet family, especially the current GPU generation path represented by:

- `rtlib/phantom/example/resnet20_cifar10_gpu.onnx.inc`
- `rtlib/phantom/example/lenet_gpu.onnx.inc`

## Why Scheme B

For `PHANTOM`, the current active path is:

1. ONNX/SIHE lowering
2. `CKKS_PASS`
3. `POLY2C_PASS` with `POLY_PASS` disabled
4. CKKS-to-C emission
5. Phantom runtime calls

The key facts are:

- `CKKS_PASS` already runs `SIHE2CKKS_LOWER`, `RESBM`, `SCALE_MANAGER`, and `CTX_PARAM_ANA`.
- `ct-ct mul` is lowered to `ckks.mul` followed by `ckks.relin` in SIHE-to-CKKS lowering.
- `rescale` is inserted later by scale management.
- for `PHANTOM`, the compiler does not currently rely on the active POLY optimization path.

Because of this, the cleanest architecture is:

1. let `CKKS_PASS` finish correctness-sensitive scale/level work
2. run `CKKS_FUSION_PASS` on finalized CKKS IR
3. emit fused runtime APIs from CKKS2C

This gives a better paper story than codegen-only grouping:

- `CKKS_PASS`: correctness and parameter legality
- `CKKS_FUSION_PASS`: semantic macro-op discovery
- `CKKS2C + Phantom runtime`: backend lowering and execution

## Model-Driven Priorities

### Operator counts in current generated Phantom programs

Observed counts in generated programs:

| Model | Rotate_ciph | Mul_plain | Add_ciph | Add_plain | Rescale_ciph | Mul_ciph | Relin | Bootstrap |
| --- | ---: | ---: | ---: | ---: | ---: | ---: | ---: | ---: |
| `lenet_gpu.onnx.inc` | 48 | 23 | 46 | 5 | 23 | 0 | 0 | 0 |
| `resnet20_cifar10_gpu.onnx.inc` | 151 | 97 | 160 | 22 | 98 | 0 | 0 | 0 |

### Immediate conclusion

For the current Phantom CNN path, the first-stage fusion priority is not `mul + relin + rescale`.

The dominant patterns are:

1. `mul_plain + rescale`
2. `rotate + add` reduction chains
3. `rotate + mul_plain + add (+ rescale)` linear transforms
4. blocking-rotation materialization

`mul_relin_rescale` should still exist in the design because it is important for future non-linear CKKS workloads and for a more general paper claim, but it is not the first performance win for current ResNet-style GPU inference.

## ResNet-Family Optimization View

The pass should be justified against ResNet families, not only against `lenet`.

For this repository, the most representative model families are:

- CIFAR-style `ResNet-20/32/44/56/110`
- ImageNet-style `ResNet-18/34`
- ImageNet-style bottleneck `ResNet-50/101/152`

Even if the currently inspected Phantom sample is `resnet20_cifar10_gpu`, the fusion priorities generalize by block structure.

### CIFAR BasicBlock family: `ResNet-20/32/44/56/110`

This family is dominated by:

- stem `conv1`
- per-block `conv1` and `conv2`
- stage-transition `downsample`
- final `global average pooling + fc`

Compiler implication:

- `P2 linear_transform` is the main optimization for almost every convolution-like region
- `P0 mul_plain_rescale` appears after many conv tails and bias/projection tails
- `P1 rotate_add_reduce` appears in packing reduction, row/column/channel aggregation, and GAP-style reductions
- `P3 blocking_rot` matters in stage entry and convolution lowering where rotated banks are first materialized

For this family, the best initial evaluation set is:

- `resnet20`
- `resnet32`
- `resnet56`
- optionally `resnet110`

This gives a convincing scaling story without changing the operator vocabulary.

### ImageNet BasicBlock family: `ResNet-18/34`

This family has the same semantic block shape as CIFAR BasicBlock, but with:

- larger spatial domains
- more expensive slot movement
- more pronounced rotate-bank pressure

Compiler implication:

- the same `P0/P1/P2/P3` catalog still applies
- `P3 blocking_rot` becomes more valuable because raw rotation count grows faster
- descriptor-based `linear_transform` becomes more important because one logical conv expands to a larger launch sequence on GPU

### ImageNet Bottleneck family: `ResNet-50/101/152`

This family introduces:

- `1x1 -> 3x3 -> 1x1` bottleneck chains
- frequent projection/downsample transforms
- more channel-mixing transforms than CIFAR BasicBlock

Compiler implication:

- `P2 linear_transform` is still the anchor pattern
- `1x1` convolutions often become smaller-rotation or even zero-rotation special cases of `linear_transform`
- `3x3` convolutions still stress `blocking_rot` and weighted rotate-accumulate
- `P0 mul_plain_rescale` remains common at projection tails

For the paper, this means the innovation is not tied to one network depth. It is tied to repeated ResNet macro-structures:

- weighted slot transforms
- slot reductions
- rotated bank generation
- projection tails

## Pipeline Placement

### Existing pipeline

Current FHE pipeline:

```text
SIHE -> CKKS -> POLY -> POLY2C
```

### Proposed pipeline

Proposed pipeline:

```text
SIHE -> CKKS -> CKKS_FUSION -> POLY -> POLY2C
```

### Rationale for pass placement

`CKKS_FUSION_PASS` must run after `CKKS_PASS` because:

- `SCALE_MANAGER` already makes `rescale` explicit
- `CTX_PARAM_ANA` already propagates level and rotate-key requirements
- fusion can then rely on finalized explicit CKKS operators

This avoids redoing correctness analyses inside the fusion pass.

## Proposed File and Class Organization

### Existing files to modify

Pipeline and pass integration:

- `include/fhe/driver/fhe_pipeline.h`
- `include/fhe/driver/fhe_cmplr.h`

CKKS config and opcode definitions:

- `ckks/config/option.yml`
- `ckks/od/opcode_def.yml`

CKKS2C emission:

- `include/fhe/ckks/ir2c_handler.h`
- `include/fhe/ckks/ir2c_ctx.h`

Phantom runtime:

- `rtlib/include/rt_phantom/phantom_api.h`
- `rtlib/include/rt_phantom/rt_phantom.h`
- `rtlib/phantom/src/phantom_lib.cu`

Tests:

- `ckks/unittest/ut_ckks.cxx`
- `ckks/unittest/test_ckks_opcodes.cxx`
- add new fusion-specific tests

### New files to add

Pass entry:

- `include/fhe/ckks/fusion_pass.h`
- `ckks/src/fusion_pass.cxx`

Pass internals:

- `include/fhe/ckks/fusion_ctx.h`
- `include/fhe/ckks/fusion_pattern.h`
- `include/fhe/ckks/fusion_rewrite.h`
- `ckks/src/fusion_driver.cxx`
- `ckks/src/fusion_flatten.cxx`
- `ckks/src/fusion_pattern_micro.cxx`
- `ckks/src/fusion_pattern_macro.cxx`
- `ckks/src/fusion_rewrite.cxx`

Tests:

- `ckks/unittest/test_ckks_fusion.cxx`

### Recommended class responsibilities

`CKKS_FUSION_PASS`

- pass object visible to `PASS_MANAGER`
- reads config and backend
- invokes per-function fusion driver

`FUSION_DRIVER`

- traverses all functions in `GLOB_SCOPE`
- runs flatten, match, rewrite, cleanup

`FUSION_CTX`

- owns function-local analysis state
- tracks stmt order, def-use, single-use facts, loop metadata, and candidate descriptors

`FUSION_PATTERN`

- abstract matcher interface
- pattern-specific `Match` and `Rewrite`

`MICRO_FUSION_PATTERN`

- local window rewrites
- `mul_plain_rescale`
- `mul_relin_rescale`

`MACRO_FUSION_PATTERN`

- loop-idiom rewrites
- `rotate_add_reduce`
- `linear_transform`
- optional `blocking_rot`

`FUSION_REWRITER`

- creates new CKKS fused ops
- rewires stmt/child links
- copies or merges required attrs
- deletes absorbed temporaries

### Suggested class-to-file mapping

The following organization is concrete enough to implement directly in this codebase.

`include/fhe/ckks/fusion_pass.h`

- `class CKKS_FUSION_PASS : public air::driver::PASS<CKKS_CONFIG>`
- public interface mirrors `CKKS_PASS`
- owns pass-level config access and driver wiring

`include/fhe/ckks/fusion_ctx.h`

- `struct FUSION_STMT_INFO`
- `struct FUSION_LOOP_INFO`
- `struct FUSION_TEMP_INFO`
- `class FUSION_CTX`

`FUSION_CTX` should expose:

- `Build_stmt_order()`
- `Build_def_use()`
- `Build_loop_info()`
- `Is_single_use(NODE_PTR)`
- `Is_barrier(STMT_PTR)`
- `Same_block(STMT_PTR, STMT_PTR)`

`include/fhe/ckks/fusion_pattern.h`

- `enum class FUSION_PATTERN_KIND`
- `struct FUSION_MATCH`
- `class FUSION_PATTERN`

Recommended derived matchers:

- `class MUL_PLAIN_RESCALE_PATTERN`
- `class MUL_RELIN_RESCALE_PATTERN`
- `class ROTATE_ADD_REDUCE_PATTERN`
- `class LINEAR_TRANSFORM_PATTERN`
- `class BLOCKING_ROT_PATTERN`

`include/fhe/ckks/fusion_rewrite.h`

- `class FUSION_REWRITER`
- helper routines to create fused CKKS nodes and erase absorbed temporaries

`ckks/src/fusion_pass.cxx`

- implements `CKKS_FUSION_PASS::{Init, Pre_run, Run, Post_run, Fini}`

`ckks/src/fusion_driver.cxx`

- implements `class FUSION_DRIVER`
- main entry:
  - `R_CODE FUSION_DRIVER::Run(FUNC_SCOPE* func, FUSION_CTX& ctx)`

`ckks/src/fusion_flatten.cxx`

- implements `FlattenForFusion(FUNC_SCOPE*, FUSION_CTX&)`
- this file should stay focused on statement normalization only

`ckks/src/fusion_pattern_micro.cxx`

- implements:
  - `MUL_PLAIN_RESCALE_PATTERN`
  - `MUL_RELIN_RESCALE_PATTERN`

`ckks/src/fusion_pattern_macro.cxx`

- implements:
  - `ROTATE_ADD_REDUCE_PATTERN`
  - `LINEAR_TRANSFORM_PATTERN`
  - `BLOCKING_ROT_PATTERN`

`ckks/src/fusion_rewrite.cxx`

- implements:
  - `Rewrite_mul_plain_rescale`
  - `Rewrite_mul_relin_rescale`
  - `Rewrite_rotate_add_reduce`
  - `Rewrite_linear_transform`
  - `Rewrite_blocking_rot`

## Pass Execution Flow

Recommended `CKKS_FUSION_PASS::Run()` workflow:

1. read backend and fusion options
2. skip if provider is not `PHANTOM`
3. skip or degrade if runtime scale/level validation mode is enabled
4. run `FlattenForFusion`
5. build stmt-local def-use and loop summaries
6. run micro fusion first
7. run macro fusion second
8. cleanup dead temporaries and canonicalize

The order matters:

- micro fusion shrinks obvious `mul_plain + rescale` chains first
- macro fusion then sees shorter, cleaner loop bodies

## Pass Activation Contract

`CKKS_FUSION_PASS` should not be "enabled by default just because it exists in the pipeline".

The effective activation condition must be:

```text
CKKS_FUSION_PASS_ACTIVE =
    CKKS:fusion == ON
    && P2C:lib == phantom
```

This must be treated as a strict `AND`.

### Recommended user-facing option contract

Add a master CKKS option:

```text
-CKKS:fusion
```

Recommended semantics:

- default is `OFF`
- all fine-grained fusion options are ignored unless this master option is `ON`
- if `-CKKS:fusion` is `ON` but `-P2C:lib` is not `phantom`, the pass is skipped and the IR remains unchanged

This keeps behavior predictable:

- no accidental fusion on `ant`
- no accidental fusion on `seal`
- no accidental fusion on `openfhe`
- no backend-specific CKKS fused ops leaking into unsupported codegen paths

### Where to enforce the gate

The gate should be enforced at pass entry, not inside individual patterns.

Recommended implementation:

1. `Init()`
   - register CKKS fusion options only
2. `Pre_run()`
   - call `CKKS_CONFIG::Update_options()`
   - read provider from `POLY2C` option state
   - compute `_enabled = config.Fusion() && provider == PHANTOM`
3. `Run()`
   - if `_enabled == false`, return `R_CODE::NORMAL` immediately
   - otherwise execute flatten, match, rewrite, cleanup

Do not place the main gate only inside:

- pattern matchers
- CKKS2C emission
- Phantom runtime wrappers

Those layers should assume the pass contract was already enforced.

### How to obtain provider cleanly

Do not duplicate a second provider option inside `CKKS_CONFIG`.

The clean rule is:

- backend selection remains owned by `-P2C:lib=...`
- fusion policy remains owned by `-CKKS:fusion`

Implementation-wise, `CKKS_FUSION_PASS` should read the provider from `POLY2C_CONFIG` state or through a small shared helper that resolves the current provider from the existing `P2C` option.

This avoids configuration drift between:

- CKKS pass policy
- codegen backend selection

### Defensive codegen rule

Even though the pass gate should already prevent invalid IR, `CKKS2C` handlers for fused ops should still contain a defensive provider check:

```text
AIR_ASSERT(ctx.Provider() == core::PROVIDER::PHANTOM)
```

That is a safety net, not the primary control mechanism.

## IR Design Choice

### Do not use pure codegen grouping

For Scheme B, fused patterns should be materialized as explicit CKKS fused ops, not only as codegen grouping attrs.

This keeps the compiler story clear:

- the compiler discovers macro-ops in IR
- the backend lowers macro-ops to fused runtime APIs

### Descriptor operands for macro-ops

For `linear_transform` and similar large operators, do not hide all rotation/weight information only in attrs.

Use an explicit descriptor operand or symbol-like bundle.

Reason:

- `CKKS2C` still needs stable access to rotation and weight metadata
- memory management and last-use reasoning stay simpler if the descriptor is first-class IR data
- this avoids opaque backend-only grouping logic

## Pattern Catalog

## Pattern P0: `mul_plain_rescale`

### Target fused op

```text
ckks.mul_plain_rescale(cipher, plain) -> cipher
```

### Why it matters

This is the cheapest and most reliable first-stage fusion.

It appears repeatedly in both `lenet` and `resnet20`.

### Match conditions

Required:

1. `mul` result is ciphertext-plaintext or ciphertext-scalar multiplication
2. the only consuming CKKS op is `rescale`
3. the `mul` temporary has single use
4. no barrier exists between `mul` and `rescale`
5. the pattern stays within the same block

Barrier examples:

- `bootstrap`
- `modswitch`
- `scale`
- `level`
- function call with unknown effect
- any extra use of the `mul` result

### Representative line ranges in `lenet`

- `315-317`
- `321-324`
- `385-388`
- `466-468`
- `472-475`
- `536-539`
- `660-662`
- `741-743`
- `802-804`

### Representative line ranges in `resnet20_cifar10_gpu`

- `1052-1054`
- `1058-1061`
- `1111-1113`
- `1117-1120`
- `1171-1173`
- `1177-1180`
- `1236-1238`
- `1242-1245`
- `1296-1298`
- `1302-1305`
- `1361-1363`
- `1367-1370`
- `1421-1423`
- `1427-1430`
- `1488-1490`

These ranges repeat through later residual blocks as well.

### IR pseudocode before rewrite

```text
%p = ckks.encode weight_i
%m = ckks.mul %x, %p
%r = ckks.rescale %m
```

### IR pseudocode after rewrite

```text
%p = ckks.encode weight_i
%r = ckks.mul_plain_rescale %x, %p
```

### Expected CKKS2C emission

Before:

```text
Mul_plain(...)
Rescale_ciph(...)
```

After:

```text
Mul_plain_rescale(...)
```

## Pattern P1: `rotate_add_reduce`

### Target fused op

```text
ckks.rotate_add_reduce(cipher, desc) -> cipher
```

`desc` contains:

- rotation step list
- accumulation mode
- optional "copy self before reduce" flag

### Why it matters

This is a dominant pattern in ResNet-style slot reduction and packing reduction.

It is also a clean stepping stone toward more complex `linear_transform`.

### Match conditions

Required:

1. there is a loop with static trip count
2. loop body contains exactly one `rotate` feeding one `add`
3. the add target is the same accumulator across iterations
4. the rotate source is stable:
   - either the original source ciphertext
   - or the accumulator itself for in-place doubling style reduction
5. the rotate temporary has single use
6. no extra use of the rotate temporary escapes the loop
7. rotation step is affine in the loop induction variable or a power-of-two form

Accepted step forms in phase 1:

- `iv * C`
- `(1 << iv) * C`
- `1 << iv`

### Representative line ranges in `lenet`

- `641-644`
- `650-653`

Also useful secondary examples:

- `545-546`
- `551-554`

### Representative line ranges in `resnet20_cifar10_gpu`

- `1500-1503`
- `1517-1520`
- `1534-1537`

These are especially important because they appear in the later stage combination logic of ResNet blocks.

### IR pseudocode before rewrite

```text
%acc = ckks.copy %src
loop i = 1 .. N-1:
  %rot = ckks.rotate %src, step(i)
  %acc = ckks.add %acc, %rot
```

or:

```text
loop i = 0 .. K-1:
  %rot = ckks.rotate %acc, step(i)
  %acc = ckks.add %acc, %rot
```

### IR pseudocode after rewrite

```text
%acc = ckks.rotate_add_reduce %src, %reduce_desc
```

### Expected CKKS2C emission

Before:

```text
Rotate_ciph(...)
Add_ciph(...)
Rotate_ciph(...)
Add_ciph(...)
...
```

After:

```text
Rotate_add_reduce(...)
```

## Pattern P2: `linear_transform`

### Target fused op

```text
ckks.linear_transform(cipher, desc) -> cipher
```

`desc` contains:

- number of terms
- rotation step table
- weight/plain table
- accumulation mode
- optional post-rescale flag

### Why it matters

This is the most important macro-op for ResNet-style CNN inference on Phantom.

It captures the hot structure:

- rotate
- multiply by plaintext weight
- accumulate
- optional post-rescale

This is the core pattern behind convolution lowering, row/column/channel combination, and several packing transforms.

### Match conditions

Required:

1. there is a loop or tightly grouped region with static trip count
2. loop body contains:
   - one `rotate`
   - one `Pt_from_msg` or equivalent plaintext materialization
   - one `mul_plain`
   - one `add` into a dedicated accumulator
3. accumulator is initialized by `Zero_ciph`
4. the rotate source is loop-invariant within that loop
5. the plaintext index is affine in induction variables
6. the `mul_plain` temporary has single use
7. the loop result is either:
   - directly consumed by `rescale`
   - or rotated and added into a higher-level accumulator
8. no barrier crosses the matched region

Phase 1 restrictions:

- single accumulator only
- no nested cross-branch fusion
- loop bounds must be statically known
- descriptor must be materializable at compile time

### Representative line ranges in `lenet`

Primary examples:

- `339-349`
- `351-361`
- `393-403`
- `405-415`
- `417-427`
- `490-500`
- `502-512`

These are classic rotate-weight-accumulate loops.

### Representative line ranges in `resnet20_cifar10_gpu`

Stem conv example:

- `1034-1050`

Repeated conv block examples:

- `1093-1109`
- `1153-1169`
- `1218-1234`
- `1278-1294`
- `1343-1359`
- `1403-1419`
- `1470-1486`

Later combination examples:

- `1506-1516`
- `1523-1533`
- `1540-1550`

These later examples show that ResNet does not only use one conv-like linear transform shape. It also uses row, rc, and cc combinations that are structurally the same macro-op with different descriptors.

### IR pseudocode before rewrite

```text
%acc0 = ckks.zero
loop i = 0 .. N-1:
  %rot = ckks.rotate %x, rot_step(i)
  %pt  = ckks.encode weight(i)
  %mul = ckks.mul %rot, %pt
  %acc1 = ckks.add %acc0, %mul
%out = ckks.rescale %acc1
```

### IR pseudocode after rewrite

```text
%desc = ckks.lt_desc(rot_table, weight_table, N, post_rescale = true)
%out  = ckks.linear_transform %x, %desc
```

### Expected CKKS2C emission

Before:

```text
Rotate_ciph(...)
Mul_plain(...)
Add_ciph(...)
...
Rescale_ciph(...)
```

After:

```text
Linear_transform(...)
```

### Naming refinement and API evolution

The current opcode name `linear_transform` is acceptable inside the compiler, but
it is not the clearest generated-code name because the actual computation is:

```text
y = sum_i rotate(x, step_i) * plain_i
```

For paper writing and runtime API design, the recommended naming split is:

- keep compiler opcode name: `linear_transform`
- use semantic alias in the paper: `diag_linear_transform`
- use clearer runtime/generated-C name: `Rotate_mul_sum`

This keeps implementation churn low while making the algorithm easier to read.

Current generated C shape:

```text
Encode_float(&p0, weight[0], ...)
Encode_float(&p1, weight[1], ...)
...
Linear_transform(&out, &in, N, post_rescale, step0, &p0, step1, &p1, ...)
Free_plain(&pN-1)
...
Free_plain(&p0)
```

Recommended short-term API shape:

```text
static const int kSteps[N] = {step0, step1, ...};
Rotate_mul_sum(&out, &in, N, kSteps,
               plain_desc,
               post_rescale)
```

Meaning of `kSteps[i]`:

- `kSteps[i]` is the rotation step applied to the source ciphertext
- the `i`-th encoded/plain weight is multiplied with `rotate(x, kSteps[i])`
- the runtime sums all terms and optionally performs the final rescale

Concrete ResNet example, from the currently generated row/column combine path:

```text
Linear_transform(&comb_rc_result9_60, &comb_row_result9_58,
                 16, 1,
                 48,  &p0,
                 96,  &p1,
                 ...
                 720, &p14,
                 768, &p15)
```

can be rewritten conceptually as:

```text
static const int kSteps_101[16] = {
  48, 96, 144, 192, 240, 288, 336, 384,
  432, 480, 528, 576, 624, 672, 720, 768
};

Rotate_mul_sum(&comb_rc_result9_60, &comb_row_result9_58,
               16, kSteps_101,
               plain_desc_101,
               1)
```

This change matters even before a true GPU kernel appears:

- generated C is dramatically shorter
- host-side launch/setup code becomes descriptor-driven instead of vararg-heavy
- the same compiler IR can later lower either to direct constant materialization
  or to cached pre-encoded plaintexts without changing the external API name

## Pattern P2b: `block_linear_transform`

### Target fused op

Canonical IR form:

```text
ckks.block_linear_transform(cipher, desc) -> cipher
```

If the blocking-rotation producer is already materialized:

```text
ckks.block_linear_transform(cipher_bank, desc) -> cipher
```

Recommended runtime lowering names:

```text
Block_rotate_mul_sum(...)
```

### Why it matters

This is the main remaining ResNet convolution hotspot after `mul_plain_rescale`,
`rotate_add_reduce`, `linear_transform`, and `blocking_rot` are applied.

It captures the common pattern:

1. build a rotated bank of `B` ciphertext blocks
2. for each output grid `g`, accumulate:
   - `sum_b block[b] * weight[g][b]`
3. rotate the grid result by `g * grid_shift`
4. accumulate all grids
5. optionally rescale once at the end

This is not just a larger `linear_transform`. It is a two-level weighted slot
transform and should be represented as its own macro-op in both the paper and
the compiler.

### Match conditions

Required:

1. an outer loop over `grid = 0 .. G-1` with statically known bound `G`
2. an inner loop over `block = 0 .. B-1` with statically known bound `B`
3. the inner loop writes only one ciphertext accumulator initialized by
   `Zero_ciph`
4. each inner iteration has the shape:
   - read `bank[block]` or an equivalent rotated-block temporary
   - load/encode one plaintext weight from a compile-time known table
   - `Mul_plain`
   - `Add_ciph` into the same grid accumulator
5. after the inner loop, the grid accumulator is rotated by
   `grid * grid_shift`, where `grid_shift` is compile-time known
6. the outer loop adds the rotated grid result into one outer accumulator
7. the block bank and temporary accumulators have no extra uses outside the
   region
8. optional final `Rescale_ciph` is allowed and should become
   `post_rescale = true` in the fused descriptor

Optional stronger profitability conditions:

1. the weight table is row-major contiguous in memory
2. the producer bank comes from a single-use `blocking_rot`
3. `B` and `G` are large enough that descriptor-driven runtime lowering reduces
   host launch pressure meaningfully

### Representative line ranges in `resnet20_cifar10_gpu`

Original generated Phantom include:

- `1470-1479`

This is the region:

- [resnet20_cifar10_gpu.onnx.inc#L1470](/root/ace-compiler/fhe-cmplr/rtlib/phantom/example/resnet20_cifar10_gpu.onnx.inc#L1470)

Current partially fused C after existing `blocking_rotate` lowering:

- `1391-1404`

This is the region:

- [resnet20_cifar10_pre.onnx.c#L1391](/tmp/ckks_fusion_more_resnet/resnet20_cifar10_pre.onnx.c#L1391)

### IR pseudocode before rewrite

If `blocking_rot` has already been formed:

```text
%bank = ckks.blocking_rot %x, %bank_desc
%acc0 = ckks.zero
loop g = 0 .. G-1:
  %grid0 = ckks.zero
  loop b = 0 .. B-1:
    %pt   = ckks.encode weight(g, b)
    %mul  = ckks.mul %bank[b], %pt
    %grid1 = ckks.add %grid0, %mul
  %rg = ckks.rotate %grid1, g * grid_shift
  %acc1 = ckks.add %acc0, %rg
%out = ckks.rescale %acc1
```

If the bank producer is still expanded:

```text
%dup = slot replication of %x
loop b = 0 .. B-1:
  %bank[b] = ckks.rotate %dup, bank_step(b)

%acc0 = ckks.zero
loop g = 0 .. G-1:
  %grid0 = ckks.zero
  loop b = 0 .. B-1:
    %pt   = ckks.encode weight(g, b)
    %mul  = ckks.mul %bank[b], %pt
    %grid1 = ckks.add %grid0, %mul
  %rg = ckks.rotate %grid1, g * grid_shift
  %acc1 = ckks.add %acc0, %rg
%out = ckks.rescale %acc1
```

### IR pseudocode after rewrite

Most aggressive form:

```text
%desc = ckks.block_lt_desc(bank_steps, weight_table,
                           block_count = B,
                           grid_count = G,
                           grid_shift = S,
                           post_rescale = true)
%out = ckks.block_linear_transform %x, %desc
```

Conservative staged form:

```text
%bank = ckks.blocking_rot %x, %bank_desc
%desc = ckks.block_lt_desc(weight_table,
                           block_count = B,
                           grid_count = G,
                           grid_shift = S,
                           post_rescale = true)
%out = ckks.block_linear_transform %bank, %desc
```

### Expected CKKS2C emission

Before:

```text
Blocking_rotate(...)
for grid:
  Zero_ciph(...)
  for block:
    Encode_float(...) or Pt_from_msg(...)
    Mul_plain(...)
    Add_ciph(...)
  Rotate_ciph(...)
  Add_ciph(...)
Rescale_ciph(...)
```

After:

```text
Block_rotate_mul_sum(...)
```

### Status

Recommended as the next ResNet-specific macro-op after the current
`linear_transform` and `blocking_rot` support.

## Pattern P3: `blocking_rot`

### Target fused op

```text
ckks.blocking_rot(cipher, desc) -> cipher_bank
```

or a simpler runtime lowering:

```text
Rotate_bank(...)
```

### Why it matters

This is important in both `lenet` and `resnet20` because many conv kernels are currently lowered by first generating a bank of rotated ciphertexts, then consuming that bank in weighted accumulation.

This pattern is less essential than P0-P2 for a first compiler paper milestone, but it is important for ResNet runtime efficiency because it contributes many of the raw `Rotate_ciph` calls.

### Match conditions

Required:

1. either:
   - a chain of `rotate + add` on the same source that replicates slots
   - or a loop writing rotated ciphertexts into an array
2. all rotation steps are compile-time known
3. produced rotated bank is consumed by one subsequent transform region
4. bank elements are not used elsewhere

### Representative line ranges in `lenet`

- `289-295`

### Representative line ranges in `resnet20_cifar10_gpu`

- `1013-1032`

### IR pseudocode before rewrite

```text
%dup = rotate/add replication of %x
loop i = 0 .. B-1:
  %ri = ckks.rotate %dup, bank_step(i)
  store bank[i] = %ri
```

### IR pseudocode after rewrite

```text
%bank = ckks.blocking_rot %x, %bank_desc
```

### Status

Recommended as phase 2 of `CKKS_FUSION_PASS`.

P0-P2 should be implemented first.

## Pattern P4: `mul_relin_rescale`

### Target fused op

```text
ckks.mul_relin_rescale(cipher, cipher) -> cipher
```

### Why it still belongs in the design

Even though it does not appear in current Phantom `lenet` and `resnet20` generated code, it is still important:

- for generic CKKS programs
- for future non-linear blocks
- for a more complete macro-op compiler story

### Match conditions

Required:

1. `mul` is ciphertext-ciphertext
2. result type is `cipher3`
3. only user of `mul` result is `relin`
4. only user of `relin` result is `rescale`
5. no barrier or extra use exists in between

### IR pseudocode before rewrite

```text
%m = ckks.mul %a, %b
%r = ckks.relin %m
%o = ckks.rescale %r
```

### IR pseudocode after rewrite

```text
%o = ckks.mul_relin_rescale %a, %b
```

### Status

Recommended as phase 3, after P0-P2 are stable on ResNet workloads.

## Pattern Match Order

Recommended pattern application order:

1. `mul_plain_rescale`
2. `mul_relin_rescale`
3. `rotate_add_reduce`
4. `linear_transform`
5. `blocking_rot`
6. `block_linear_transform`

Reason:

- small deterministic rewrites first
- loop idioms second
- producer-bank fusion and bank-consuming macro-ops last

This minimizes overlap ambiguity.

## What Not To Fuse In Phase 1

To keep the first implementation tractable, the pass should explicitly refuse the following cases:

- any region crossing `bootstrap`
- any region crossing `modswitch`, `scale`, or explicit `level` adjustment
- residual merge regions where one fused candidate would absorb both branches across a join
- loops with two or more independent ciphertext accumulators
- regions with dynamic or runtime-only rotation tables
- regions whose intermediate temporaries are used by debug/trace/validation hooks
- cross-basic-block patterns that require CFG-sensitive motion

This keeps Phase 1 focused on local or single-loop idioms that already dominate current ResNet generated code.

## Rewrite Strategy

### Flatten-for-fusion

The pass should first flatten CKKS expressions into stmt-level temporaries.

Do not reuse codegen-layer flattening directly. Use the same AIR flatten infrastructure inside CKKS:

- flatten selected CKKS expression nodes
- preserve attrs on generated temporaries
- build predictable stmt-local windows

### Def-use facts needed

Per function, the pass needs:

- defining stmt of each temporary
- use count of each temporary
- same-block membership
- loop nesting and parent loop
- loop induction variables and static bounds
- whether a node is a barrier

### Cleanup after rewrite

Cleanup must:

1. remove absorbed temporaries
2. remove obsolete `free` sites for removed temporaries
3. preserve root statement source position
4. keep required attrs on fused nodes

## Recommended Runtime APIs

Phase 1:

```text
Phantom_mul_plain_rescale(CIPHER res, CIPHER op1, PLAIN op2)
Phantom_rotate_add_reduce(CIPHER res, CIPHER op, REDUCE_DESC desc)
```

Phase 2:

```text
Phantom_linear_transform(CIPHER res, CIPHER op, LT_DESC desc)
Phantom_blocking_rot(CIPHER_BANK bank, CIPHER op, ROT_BANK_DESC desc)
Phantom_rotate_mul_sum(CIPHER res, CIPHER op, LT_DESC desc)
Phantom_block_rotate_mul_sum(CIPHER res, CIPHER op, BLT_DESC desc)
```

Phase 3:

```text
Phantom_mul_relin_rescale(CIPHER res, CIPHER op1, CIPHER op2)
```

The first runtime implementation may be wrappers around existing primitive Phantom evaluator calls. The compiler-level macro-op still remains valid. Later the runtime can replace wrapper implementations with true fused GPU kernels or reduced-launch execution.

For migration safety:

- the compiler may keep emitting `Linear_transform(...)` internally at first
- `Rotate_mul_sum` can be introduced as a clearer alias or replacement C API
- `block_linear_transform` should be added as a distinct opcode rather than
  overloading `linear_transform`

## Concrete File Impact

### Pipeline integration

- modify `include/fhe/driver/fhe_pipeline.h`
  - add new pass enum item
  - add `ckks::CKKS_FUSION_PASS` to `FHE_PASS_MANAGER`

- optionally modify `include/fhe/driver/fhe_cmplr.h`
  - add helper accessors if convenient

### CKKS pass implementation

- add `include/fhe/ckks/fusion_pass.h`
- add `ckks/src/fusion_pass.cxx`
- add fusion helper files listed above

### CKKS config

- modify `ckks/config/option.yml`
  - add enable flag for fusion pass
  - add fine-grained flags for:
    - `fuse_mul_plain_rescale`
    - `fuse_rotate_add_reduce`
    - `fuse_linear_transform`
    - `fuse_blocking_rot`
    - `fuse_block_linear_transform`
    - `fuse_mul_relin_rescale`

No extra CKKS CMake change is required if source files stay under `ckks/src`, because that directory is already added with recursive globbing.

### CKKS opcode definitions

- modify `ckks/od/opcode_def.yml`
  - add:
    - `mul_plain_rescale`
    - `rotate_add_reduce`
    - `linear_transform`
    - `blocking_rot`
    - `block_linear_transform`
    - `mul_relin_rescale`

Generated headers and opcode tables will update automatically through the existing opcode generation pipeline.

### CKKS2C

- modify `include/fhe/ckks/ir2c_handler.h`
  - add handlers for fused ops

- modify `include/fhe/ckks/ir2c_ctx.h`
  - add descriptor emission helpers if needed
  - add array/descriptor-based emission support for `Rotate_mul_sum` and
    `Block_rotate_mul_sum`

### Phantom runtime

- modify `rtlib/include/rt_phantom/phantom_api.h`
- modify `rtlib/include/rt_phantom/rt_phantom.h`
- modify `rtlib/phantom/src/phantom_lib.cu`
- optionally reuse `rtlib/phantom/src/pt_mgr.cu` for descriptor-backed constant
  loading instead of materializing one temporary plain per term

### Tests

- add `ckks/unittest/test_ckks_fusion.cxx`
- extend `ckks/unittest/test_ckks_opcodes.cxx`
- register new test in `ckks/unittest/ut_ckks.cxx`

## Difficulty Estimate

Estimated engineering difficulty:

| Item | Difficulty | Reason |
| --- | --- | --- |
| Pipeline hookup (`fhe_pipeline.h`) | Low | one new pass enum and pass-manager insertion |
| CKKS config flag plumbing | Low | follows existing pass option style |
| New fused opcode definitions | Low | mostly table-driven, but touches generated artifacts |
| Flatten-for-fusion infrastructure | Medium | must preserve stmt order and attrs correctly |
| Def-use + loop summary inside CKKS | Medium | analysis is local but must be robust on generated IR |
| `P0 mul_plain_rescale` | Low | single-window, single-use rewrite |
| `P1 rotate_add_reduce` | Medium | loop idiom recognition needed |
| `P2 linear_transform` | High | descriptor construction, loop matching, and rewrite are all non-trivial |
| `P3 blocking_rot` | Medium-High | producer-bank lifetime and consumer-region coupling |
| `P2b block_linear_transform` | High | nested-loop matching, descriptor construction, and producer-bank coupling |
| `P4 mul_relin_rescale` | Medium | local rewrite is easy, but value only appears when ct-ct mul path is active |
| CKKS2C fused-op emission | Medium | new handlers plus descriptor serialization |
| Phantom runtime wrappers | Low-Medium | easy as wrappers, harder as true fused kernels |
| True fused GPU kernels | High | requires kernel design, memory layout, and launch tuning |

Recommended implementation order by cost-performance ratio:

1. pass hookup + opcode/config plumbing
2. flatten + local def-use
3. `P0 mul_plain_rescale`
4. `P1 rotate_add_reduce`
5. `P2 linear_transform`
6. `P3 blocking_rot`
7. `P2b block_linear_transform`
8. `P4 mul_relin_rescale`

## Phased Implementation Plan

### Phase 0: infrastructure

- add pass to pipeline
- add config flags
- implement flatten-for-fusion
- build local def-use and loop summaries

### Phase 1: low-risk high-value fusion

- implement `mul_plain_rescale`
- implement `rotate_add_reduce`
- add CKKS2C emission and Phantom runtime wrappers

This phase already targets the main ResNet and LeNet hotspots.

### Phase 2: ResNet-focused macro fusion

- implement `linear_transform`
- optionally implement `blocking_rot`
- then implement `block_linear_transform` for the remaining nested
  rotate-mul-accumulate ResNet conv core

This is the main performance phase for ResNet-family CNN inference.

### Phase 3: generic CKKS completeness

- implement `mul_relin_rescale`
- extend profitability rules if needed

## Recommended Initial Scope for the Paper

If the goal is to deliver a coherent compiler paper soon, the best scope is:

1. standalone `CKKS_FUSION_PASS`
2. explicit fused CKKS macro-ops in IR
3. first-class lowering to Phantom fused runtime APIs
4. evaluation centered on:
   - `lenet`
   - `resnet20_cifar10`
   - optionally additional ResNet variants once generated

The most defensible headline is:

> the compiler discovers CKKS semantic macro-ops for CNN inference, especially linear transforms and slot reductions, and lowers them to backend-specific fused GPU runtime APIs.

That claim matches the real structure of the current codebase and the real hotspots in the generated programs.
