# SM Fixed Bootstrap Anchors

## Scope

This note documents how the `-CKKS:sm` flow currently interprets fixed
bootstrap anchors, using `resnet20_cifar10_pre.onnx` as the concrete example.
It also explains the observed mismatch:

- `sm` planning sees `19` fixed bootstrap anchors
- final generated Cheddar C contains `18` `Bootstrap(...)` calls

## What `sm` currently does

`sm` is a fixed-anchor rescale planner. The current flow in
`fhe-cmplr/ckks/src/sm.cxx` is:

1. Build a region graph on the original CKKS IR, where bootstrap nodes still
   exist.
2. Collect existing CKKS bootstrap nodes as fixed anchors.
3. Strip bootstrap nodes from the IR temporarily.
4. Rebuild the region graph on the stripped IR.
5. Remap each saved bootstrap anchor onto the stripped region graph.
6. Use those remapped regions as fixed band boundaries and only plan rescale
   placement inside each band.
7. Reinsert rescale points and restore the original bootstrap nodes.

Relevant code:

- anchor collection and remap: `fhe-cmplr/ckks/src/sm.cxx:728`
- fixed-band planning loop: `fhe-cmplr/ckks/src/sm.cxx:814`
- restore bootstrap nodes: `fhe-cmplr/ckks/src/sm.cxx:852`

## ResNet20 fixed-anchor result

For the command:

```bash
release/driver/fhe_cmplr -VEC:conv_parl \
  -CKKS:q0=60:sf=40:N=65536:sm:icl=17 \
  -P2C:lib=cheddar:df=/tmp/resnet20_cifar10.bin \
  model/resnet20_cifar10_pre.onnx \
  -o /tmp/resnet20_current_sm.onnx.inc
```

the `sm` planning stage sees:

- stripped region count: `259`
- fixed anchor regions:
  `3, 16, 29, 42, 55, 68, 81, 97, 110, 123, 136, 149, 162, 178, 191, 204, 217, 230, 243`

The resulting fixed bands are:

- `[1, 3]`
- `[3, 16]`
- `[16, 29]`
- `[29, 42]`
- `[42, 55]`
- `[55, 68]`
- `[68, 81]`
- `[81, 97]`
- `[97, 110]`
- `[110, 123]`
- `[123, 136]`
- `[136, 149]`
- `[149, 162]`
- `[162, 178]`
- `[178, 191]`
- `[191, 204]`
- `[204, 217]`
- `[217, 230]`
- `[230, 243]`
- tail `[243, 259]`

For this model, every anchor remaps onto the same region id as its original
bootstrap/input region. In other words, there is no anchor drift in this
particular case.

## The 19 -> 18 mismatch

### Stage-by-stage count

Local stage dumps show:

| Stage | Bootstrap count |
| --- | ---: |
| after SIHE->CKKS lowering | 19 |
| after `SM::Perform()` | 19 |
| after `SCALE_MANAGER` only | 19 |
| after `CTX_PARAM_ANA` | 18 |

So the missing bootstrap is **not** dropped by `sm` itself, and **not** dropped
by `SCALE_MANAGER`. It is dropped by `CTX_PARAM_ANA`.

### Which anchor disappears

The dropped anchor is the first one:

- fixed region: `3`
- model site: `/relu/Relu`
- generated C preg: `_preg_268435458`
- AIR preg id: `PREG[0x10000002]`

Before `CTX_PARAM_ANA`, the IR still contains:

```text
stp PREG[0x10000003]
  CKKS.bootstrap
    ldp PREG[0x10000002]
call "App_relu_0"
  ldp PREG[0x10000003]
```

After `CTX_PARAM_ANA`, it becomes:

```text
stp PREG[0x10000003]
  ldp PREG[0x10000002]
call "App_relu_0"
  ldp PREG[0x10000003]
```

So the bootstrap on `_preg_268435458` is deleted and the call consumes the
bootstrap operand directly.

### Exact deletion logic

The deletion happens in:

- `fhe-cmplr/include/fhe/core/ctx_param_ana.h:961`

The relevant condition is:

```c++
if (!ana_ctx.Rgn_scl_bts_mng() && !ana_ctx.Rgn_bts_mng()) {
  ...
  if (with_relu == nullptr &&
      rescale_lev + mul_level <= ana_ctx.Input_level()) {
    parent_node->Set_child(id, child);
    ...
  }
}
```

This means `CTX_PARAM_ANA` treats a bootstrap as redundant when:

1. the flow is not `sbm` and not `bm`
2. the bootstrap node does not carry `WITH_RELU`
3. the input ciphertext still has enough level budget:
   `rescale_lev + mul_level <= input_level`

### Why it triggers only on the first anchor

For the first anchor:

- child: `PREG[0x10000002]` (`_preg_268435458`)
- child `rescale_level = 2`
- demanded bootstrap result `mul_level = 3`
- input level from the command line: `icl = 17`

So the redundancy test succeeds:

```text
2 + 3 <= 17
```

For the next anchor, the child already sits much deeper:

- child: `PREG[0x10000008]` (`_preg_268435464`)
- child `rescale_level = 15`
- same demand level around `3`

Now the test fails:

```text
15 + 3 > 17
```

Therefore only the first anchor is deleted, and the remaining 18 bootstrap
anchors stay in the final IR/C output.

## Why `sm` is affected by this

In the `sm` branch of `fhe-cmplr/ckks/src/ckks.cxx`, `SCALE_MANAGER` is run
with a temporary config `sm_scale_cfg` whose `_rgn_scl_bts_mng` is forced to
`true` after `sm` succeeds:

- `fhe-cmplr/ckks/src/ckks.cxx:76`
- `fhe-cmplr/ckks/src/ckks.cxx:80`

But `CTX_PARAM_ANA` is still constructed with the original `config`:

- `fhe-cmplr/ckks/src/ckks.cxx:82`

So during `CTX_PARAM_ANA`, the guards are still:

- `Rgn_scl_bts_mng() == false`
- `Rgn_bts_mng() == false`

and the redundant-bootstrap deletion path remains enabled for `sm`.

## Practical implication

If `sm` is intended to preserve the fixed bootstrap anchors that it planned
around, the current pipeline still has a later phase that can delete one of
those anchors as redundant.

In the current ResNet20 case:

- planning anchor count: `19`
- final runtime bootstrap count: `18`
- missing runtime bootstrap: the first anchor at `/relu/Relu`, region `3`

Conceptually, the mismatch is:

- `sm` plans rescale with fixed bootstrap anchors
- `CTX_PARAM_ANA` later performs a local redundancy cleanup using input-level
  budget

So the final runtime bootstrap set is not guaranteed to remain identical to the
fixed-anchor set used by `sm` planning.
