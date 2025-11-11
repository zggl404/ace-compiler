//-*-c++-*-
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#ifndef NN_VECTOR_NGRAPH_PATTEN_CTX_H
#define NN_VECTOR_NGRAPH_PATTEN_CTX_H

#include "air/core/default_handler.h"
#include "air/opt/ssa_build.h"
#include "air/opt/ssa_container.h"
#include "nn/core/attr.h"
#include "nn/core/default_handler.h"
#include "nn/vector/config.h"
#include "nn/vector/vector_ctx.h"
#include "nn/vector/vector_enum.h"
#include "nn/vector/vector_gen.h"
#include "nn/vector/vector_utils.h"

namespace nn {

namespace vector {

using namespace air::base;
using namespace air::driver;

using AVGPOOL_WORKLIST = std::vector<NODE_ID>;

class NGRAPH_PATTERN_CTX : public ANALYZE_CTX {
public:
  NGRAPH_PATTERN_CTX(FUNC_SCOPE* func_scope, VECTOR_CTX& ctx,
                     const DRIVER_CTX* driver_ctx, const VECTOR_CONFIG& cfg)
      : _func_scope(func_scope),
        _ctx(ctx),
        _driver_ctx(driver_ctx),
        _config(cfg),
        _ssa_cntr(&_func_scope->Container()) {}

  // declare access API for VECTOR_CTX
  DECLARE_VECTOR_CTX_ACCESS_API(_ctx)

  // declare access API for VECTOR_CONFIG
  DECLARE_VECTOR_CONFIG_ACCESS_API(_config)

  // declare trace API for detail tracing
  DECLARE_TRACE_DETAIL_API(_config, _driver_ctx)

  void Build_ssa() {
    air::opt::SSA_BUILDER ssa_builder(_func_scope, &_ssa_cntr, _driver_ctx);
    ssa_builder.Perform();
  }

  air::opt::SSA_CONTAINER* Ssa_cntr() { return &_ssa_cntr; }

  air::base::CONTAINER* Container() { return _ssa_cntr.Container(); }

  NODE_PTR Get_def_node(NODE_PTR node) {
    AIR_ASSERT(node->Opcode() == air::core::OPC_LD ||
               node->Opcode() == air::core::OPC_LDP)
    air::opt::SSA_CONTAINER* ssa_cntr = this->Ssa_cntr();
    air::opt::SSA_VER_PTR    ssa_ver  = ssa_cntr->Node_ver(node->Id());
    AIR_ASSERT_MSG(ssa_ver->Kind() == air::opt::VER_DEF_KIND::STMT,
                   "must define by stmt");

    CONTAINER* cntr     = ssa_cntr->Container();
    NODE_PTR   def_node = cntr->Stmt(ssa_ver->Def_stmt_id())->Node();
    return def_node;
  }

  bool Is_pool_node(NODE_PTR node) {
    if (node->Opcode() ==
            OPCODE(nn::core::NN, nn::core::OPCODE::AVERAGE_POOL) ||
        node->Opcode() == OPCODE(nn::core::NN, nn::core::OPCODE::MAX_POOL)) {
      return true;
    }
    return false;
  }

  bool Is_strided_slice_node(NODE_PTR node) {
    if (node->Opcode() ==
        OPCODE(nn::core::NN, nn::core::OPCODE::STRIDED_SLICE)) {
      return true;
    }
    return false;
  }

  void Register_avgpool_node(NODE_ID node) { _avgpool_wl.push_back(node); }

  AVGPOOL_WORKLIST Get_avgpool_worklist() { return _avgpool_wl; }

private:
  FUNC_SCOPE*             _func_scope;
  VECTOR_CTX&             _ctx;
  const DRIVER_CTX*       _driver_ctx;
  const VECTOR_CONFIG&    _config;
  air::opt::SSA_CONTAINER _ssa_cntr;
  AVGPOOL_WORKLIST        _avgpool_wl;
};

//! @brief mask fusion handler
class NGRAPH_PATTERN_HANDLER : public nn::core::DEFAULT_HANDLER {
public:
  template <typename RETV, typename VISITOR>
  RETV Handle_conv(VISITOR* visitor, air::base::NODE_PTR node) {
    NGRAPH_PATTERN_CTX& ctx   = visitor->Context();
    NODE_PTR            input = node->Child(0);

    if (input->Has_sym()) {
      air::base::ADDR_DATUM_PTR var = input->Addr_datum();
      if (var->Is_formal()) {
        return RETV();
      }
    }

    NODE_PTR input_def = ctx.Get_def_node(input);

    NODE_PTR op = input_def->Child(0);
    if (ctx.Is_strided_slice_node(op)) {
      NODE_PTR ss_input     = op->Child(0);
      NODE_PTR ss_input_def = ctx.Get_def_node(ss_input);
      op                    = ss_input_def->Child(0);
      if (ctx.Is_pool_node(op)) {
        ctx.Register_avgpool_node(op->Id());
      }
    }
    return RETV();
  }

};  // NGRAPH_PATTERN_CORE_HANDLER

}  // namespace vector

}  // namespace nn

#endif  // NN_VECTOR_NGRAPH_PATTEN_CTX_H
