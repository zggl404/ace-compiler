//-*-c++-*-
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#ifndef FHE_POLY_IR2C_CTX_H
#define FHE_POLY_IR2C_CTX_H

#include "fhe/ckks/ir2c_ctx.h"

namespace fhe {

namespace poly {

//! @brief Context to convert polynomial IR to C
class IR2C_CTX : public fhe::ckks::IR2C_CTX {
public:
  //! @brief Construct a new ir2c ctx object
  //! @param os Output stream
  IR2C_CTX(std::ostream& os, const fhe::core::LOWER_CTX& lower_ctx,
           const fhe::poly::POLY2C_CONFIG& cfg)
      : fhe::ckks::IR2C_CTX(os, lower_ctx, cfg) {}

  //! @brief Include "rt_ant.h" in generated C file
  void Emit_global_include() {
    _os << "// external header files" << std::endl;
    _os << "#include \"";
    _os << fhe::core::Provider_header(Provider());
    _os << "\"" << std::endl << std::endl;
    _os << "typedef double float64_t;" << std::endl;
    _os << "typedef float float32_t;" << std::endl << std::endl;
  }

  //! @brief Emit fhe server function definition
  //! @param func Pointer to FUNC_SCOPE
  void Emit_func_def(air::base::FUNC_SCOPE* func) {
    air::base::FUNC_PTR decl = func->Owning_func();
    if (decl->Entry_point()->Is_program_entry()) {
      _os << "bool " << decl->Name()->Char_str() << "()";
    } else {
      air::base::IR2C_CTX::Emit_func_def(func);
    }
  }

  //! @brief Emit all local variables
  //! @param func Pointer to function scope
  void Emit_local_var(air::base::FUNC_SCOPE* func) {
    air::base::IR2C_CTX::Emit_local_var(func);
    air::base::ENTRY_PTR entry        = func->Owning_func()->Entry_point();
    bool                 is_prg_entry = entry->Is_program_entry();
    if (Provider() != fhe::core::PROVIDER::ANT) {
      // no need to call memset for SEAL/OpenFHE on ciphertext/plaintext
      if (is_prg_entry) {
        uint32_t num_args = entry->Type()->Cast_to_sig()->Num_param();
        for (uint32_t i = 0; i < num_args; ++i) {
          air::base::ADDR_DATUM_PTR parm = func->Formal(i);
          AIR_ASSERT(parm->Is_formal());
          AIR_ASSERT(
              Is_cipher_type(parm->Type_id()) ||
              (parm->Type()->Is_array() &&
               Is_cipher_type(parm->Type()->Cast_to_arr()->Elem_type_id())));
          Emit_get_input_data(parm);
        }
      }
      return;
    }

    // ANT library need memset on ciphertext/plaintext
    _os << "  uint32_t  degree = Degree();" << std::endl;
    for (auto it = func->Begin_addr_datum(); it != func->End_addr_datum();
         ++it) {
      air::base::TYPE_PTR type = (*it)->Type();
      air::base::TYPE_ID  type_id =
          type->Is_array() ? type->Cast_to_arr()->Elem_type_id() : type->Id();

      if (Is_cipher_type(type_id) || Is_cipher3_type(type_id) ||
          Is_plain_type(type_id) || Is_rns_poly_type(type_id)) {
        if (!(*it)->Is_formal()) {
          _os << "  memset(&";
          Emit_var(*it);
          _os << ", 0, sizeof(";
          Emit_var(*it);
          _os << "));" << std::endl;
        } else if (is_prg_entry) {
          Emit_get_input_data(*it);
        }
      }
    }
    for (auto it = func->Begin_preg(); it != func->End_preg(); ++it) {
      air::base::TYPE_ID type = (*it)->Type_id();
      if (Is_cipher_type(type) || Is_cipher3_type(type) ||
          Is_plain_type(type) || Is_rns_poly_type(type)) {
        _os << "  memset(&";
        Emit_preg_id((*it)->Id());
        _os << ", 0, sizeof(";
        Emit_preg_id((*it)->Id());
        _os << "));" << std::endl;
      } else if (Is_poly_type(type)) {
        _os << "  Alloc_lpoly_data(&";
        Emit_preg_id((*it)->Id());
        _os << ", degree);" << std::endl;
      }
    }
  }

  void Emit_need_bts() {
    if (this->Provider() == core::PROVIDER::SEAL) {
      _os << "bool Need_bts() {"
          << "\n";
      if (this->_need_bts) {
        _os << "  return true;\n";
      } else {
        _os << "  return false;\n";
      }

      _os << "}\n\n";
    }
  }

  bool Is_poly_ptr_ptr(air::base::TYPE_PTR type) {
    if (type->Is_ptr()) {
      air::base::TYPE_PTR pts_to = type->Cast_to_ptr()->Domain_type();
      if (pts_to->Is_ptr() && Lower_ctx().Is_rns_poly_type(
                                  pts_to->Cast_to_ptr()->Domain_type_id())) {
        return true;
      }
    }
    return false;
  }

private:
  void Emit_get_input_data(air::base::ADDR_DATUM_PTR var) {
    if (var->Type()->Is_array()) {
      uint64_t elem_count = var->Type()->Cast_to_arr()->Elem_count();
      _os << "  for (int input_idx = 0; input_idx < " << elem_count
          << "; ++input_idx) {" << std::endl;
      _os << "    ";
      Emit_var(var);
      _os << "[input_idx] = Get_input_data(\"" << var->Name()->Char_str()
          << "\", input_idx);" << std::endl;
      _os << "  }" << std::endl;
    } else {
      _os << "  ";
      Emit_var(var);
      _os << " = Get_input_data(\"" << var->Name()->Char_str() << "\", 0);"
          << std::endl;
    }
  }
};  // IR2C_CTX

}  // namespace poly

}  // namespace fhe

#endif  // FHE_POLY_IR2C_CTX_H
