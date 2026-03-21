//-*-c++-*- 
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#include "common/pt_mgr.h"

#include <math.h>
#include <stdlib.h>

#include "common/error.h"
#include "common/rt_data_file.h"
#include "common/rt_env.h"
#include "rt_phantom/rt_phantom.h"

struct PT_MGR {
  struct RT_DATA_FILE* _file;
  char*                _msg_buf;
  uint64_t             _msg_size;
  bool                 _sync_read;
};

static PT_MGR Pt_mgr = {0};

bool Pt_mgr_init(const char* fname) {
  IS_TRUE(fname != NULL, "missing rt data file name");
  IS_TRUE(Pt_mgr._file == NULL, "pt mgr already initialized");

  bool        sync_read = true;
  const char* sr_env    = getenv(ENV_RT_DATA_ASYNC_READ);
  if (sr_env != NULL && atoi(sr_env) == 1) {
    sync_read = false;
  }

  if (Block_io_init(sync_read) == false) {
    return false;
  }

  Pt_mgr._sync_read = sync_read;
  Pt_mgr._file      = Rt_data_open(fname, sync_read);
  if (Pt_mgr._file == NULL) {
    Block_io_fini(sync_read);
    Pt_mgr._sync_read = false;
    return false;
  }

  IS_TRUE(!Rt_data_is_plaintext(Pt_mgr._file),
          "phantom pt mgr does not support plaintext rt data yet");

  Pt_mgr._msg_size = Rt_data_size(Pt_mgr._file);
  Pt_mgr._msg_buf  = (char*)malloc(Pt_mgr._msg_size);
  IS_TRUE(Pt_mgr._msg_buf != NULL || Pt_mgr._msg_size == 0,
          "failed to malloc rt data buffer");
  IS_TRUE(Rt_data_fill(Pt_mgr._file, Pt_mgr._msg_buf, Pt_mgr._msg_size),
          "failed to fill rt data from file");
  return true;
}

void Pt_mgr_fini() {
  if (Pt_mgr._file != NULL) {
    Rt_data_close(Pt_mgr._file);
    Pt_mgr._file = NULL;
  }
  free(Pt_mgr._msg_buf);
  Pt_mgr._msg_buf   = NULL;
  Pt_mgr._msg_size  = 0;
  Block_io_fini(Pt_mgr._sync_read);
  Pt_mgr._sync_read = false;
}

void Pt_prefetch(uint32_t index) { (void)index; }

void* Pt_get(uint32_t index, size_t len, uint32_t scale, uint32_t level) {
  (void)index;
  (void)len;
  (void)scale;
  (void)level;
  IS_TRUE(false, "phantom pt mgr does not support plaintext rt data");
  return NULL;
}

void* Pt_get_validate(float* buf, uint32_t index, size_t len, uint32_t scale,
                      uint32_t level) {
  (void)buf;
  (void)index;
  (void)len;
  (void)scale;
  (void)level;
  IS_TRUE(false, "phantom pt mgr does not support plaintext rt data");
  return NULL;
}

void Pt_free(uint32_t index) { (void)index; }

void Free_data(void* poly) { (void)poly; }

static float* Msg_ptr(uint32_t index, uint64_t ofst, size_t len) {
  IS_TRUE(Pt_mgr._file != NULL, "pt mgr is not initialized");
  uint64_t file_ofst = Rt_data_entry_offset(Pt_mgr._file, index,
                                            (ofst + len) * sizeof(float));
  IS_TRUE(file_ofst + (ofst + len) * sizeof(float) <= Pt_mgr._msg_size,
          "entry offset too large");
  return (float*)&Pt_mgr._msg_buf[file_ofst + ofst * sizeof(float)];
}

void* Pt_from_msg(void* pt, uint32_t index, size_t len, uint32_t scale,
                  uint32_t level) {
  float* data = Msg_ptr(index, 0, len);
  Encode_float((PLAIN)pt, data, len, scale, level);
  return pt;
}

void* Pt_from_msg_ofst(void* pt, uint32_t index, size_t ofst, size_t len,
                       uint32_t scale, uint32_t level) {
  float* data = Msg_ptr(index, ofst, len);
  Encode_float((PLAIN)pt, data, len, scale, level);
  return pt;
}

void Pt_from_msg_validate(void* pt, float* buf, uint32_t index, size_t len,
                          uint32_t scale, uint32_t level) {
  float* data = Msg_ptr(index, 0, len);
  for (uint32_t i = 0; i < len; ++i) {
    FMT_ASSERT(fabs(buf[i] - data[i]) < 0.000001,
               "Pt_from_msg_validate failed. index=%d, i=%d: %f != %f.",
               index, i, buf[i], data[i]);
  }
  Encode_float((PLAIN)pt, data, len, scale, level);
}

void Pt_from_msg_ofst_validate(void* pt, float* buf, uint32_t index,
                               size_t ofst, size_t len, uint32_t scale,
                               uint32_t level) {
  float* data = Msg_ptr(index, ofst, len);
  for (uint32_t i = 0; i < len; ++i) {
    FMT_ASSERT(fabs(buf[i] - data[i]) < 0.000001,
               "Pt_from_msg_validate failed. index=%d, i=%d: %f != %f.",
               index, i, buf[i], data[i]);
  }
  Encode_float((PLAIN)pt, data, len, scale, level);
}
