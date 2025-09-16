//-*-c++-*-
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#ifndef AIR_CG_ASM_EMIT_CORE_HANDLER_H
#define AIR_CG_ASM_EMIT_CORE_HANDLER_H

#include "air/cg/cgir_node.h"
namespace air {
namespace cg {
//! @brief Assembly emission handler for core::ISA.
class ASM_EMIT_CORE_HANDLER {
public:
  template <typename VISITOR>
  void Handle_phi(VISITOR* visitor, INST_PTR inst) {
    return;
  }
  template <typename VISITOR>
  void Handle_chi(VISITOR* visitor, INST_PTR inst) {
    return;
  }
};

}  // namespace cg
}  // namespace air
#endif  // AIR_CG_ASM_EMIT_CORE_HANDLER_H
