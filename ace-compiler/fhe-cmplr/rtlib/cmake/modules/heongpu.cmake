#=============================================================================
#
# Copyright (c) Ant Group Co., Ltd
# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
#
#=============================================================================

function(build_external_heongpu)
  if(TARGET HEonGPU::heongpu)
    set(HEONGPU_TARGET HEonGPU::heongpu PARENT_SCOPE)
    return()
  endif()

  if(TARGET heongpu)
    add_library(HEonGPU::heongpu ALIAS heongpu)
    set(HEONGPU_TARGET HEonGPU::heongpu PARENT_SCOPE)
    return()
  endif()

  set(HEONGPU_DEFAULT_SOURCE_DIR "${PROJECT_SOURCE_DIR}/../../backend/HEonGPU")

  if(DEFINED ENV{RTLIB_HEONGPU_PATH} AND NOT "$ENV{RTLIB_HEONGPU_PATH}" STREQUAL "")
    list(APPEND CMAKE_PREFIX_PATH "$ENV{RTLIB_HEONGPU_PATH}")
    find_package(HEonGPU REQUIRED CONFIG)
    set(HEONGPU_TARGET HEonGPU::heongpu PARENT_SCOPE)
    return()
  endif()

  if(DEFINED ENV{RTLIB_HEONGPU_SOURCE_DIR} AND
     IS_DIRECTORY "$ENV{RTLIB_HEONGPU_SOURCE_DIR}")
    set(HEONGPU_SOURCE_DIR "$ENV{RTLIB_HEONGPU_SOURCE_DIR}")
  elseif(IS_DIRECTORY "${HEONGPU_DEFAULT_SOURCE_DIR}")
    set(HEONGPU_SOURCE_DIR "${HEONGPU_DEFAULT_SOURCE_DIR}")
  else()
    message(FATAL_ERROR
      "HEonGPU source not found. Set RTLIB_HEONGPU_SOURCE_DIR to a local "
      "checkout or RTLIB_HEONGPU_PATH to an installed package.")
  endif()

  message(STATUS "Using local HEonGPU source     : ${HEONGPU_SOURCE_DIR}")
  set(HEonGPU_BUILD_TESTS OFF CACHE BOOL "" FORCE)
  set(HEonGPU_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
  set(HEonGPU_BUILD_BENCHMARKS OFF CACHE BOOL "" FORCE)

  add_subdirectory("${HEONGPU_SOURCE_DIR}" "${CMAKE_BINARY_DIR}/external/heongpu")

  if(NOT TARGET heongpu)
    message(FATAL_ERROR "HEonGPU source configured but target 'heongpu' was not created")
  endif()

  add_library(HEonGPU::heongpu ALIAS heongpu)
  set(HEONGPU_TARGET HEonGPU::heongpu PARENT_SCOPE)
endfunction()
