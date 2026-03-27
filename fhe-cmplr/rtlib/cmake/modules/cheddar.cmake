#=============================================================================
#
# Copyright (c) Ant Group Co., Ltd
# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
#
#=============================================================================

function(build_external_cheddar)
  if(TARGET cheddar)
    set(CHEDDAR_TARGET cheddar PARENT_SCOPE)
    return()
  endif()

  set(CHEDDAR_DEFAULT_SOURCE_DIR "${PROJECT_SOURCE_DIR}/../../backend/cheddar-fhe")

  if(DEFINED ENV{RTLIB_CHEDDAR_SOURCE_DIR} AND
     IS_DIRECTORY "$ENV{RTLIB_CHEDDAR_SOURCE_DIR}")
    set(CHEDDAR_SOURCE_DIR "$ENV{RTLIB_CHEDDAR_SOURCE_DIR}")
  elseif(IS_DIRECTORY "${CHEDDAR_DEFAULT_SOURCE_DIR}")
    set(CHEDDAR_SOURCE_DIR "${CHEDDAR_DEFAULT_SOURCE_DIR}")
  else()
    message(FATAL_ERROR
      "CHEDDAR source not found. Set RTLIB_CHEDDAR_SOURCE_DIR to a local checkout.")
  endif()

  message(STATUS "Using local CHEDDAR source     : ${CHEDDAR_SOURCE_DIR}")

  if(DEFINED BUILD_UNITTEST)
    set(_CHEDDAR_SAVED_BUILD_UNITTEST ${BUILD_UNITTEST})
  endif()
  if(DEFINED BUILD_TESTS)
    set(_CHEDDAR_SAVED_BUILD_TESTS ${BUILD_TESTS})
  endif()
  if(DEFINED ENABLE_EXTENSION)
    set(_CHEDDAR_SAVED_ENABLE_EXTENSION ${ENABLE_EXTENSION})
  endif()
  if(DEFINED USE_GMP)
    set(_CHEDDAR_SAVED_USE_GMP ${USE_GMP})
  endif()

  set(BUILD_UNITTEST OFF)
  set(BUILD_TESTS OFF)
  set(ENABLE_EXTENSION OFF)
  set(USE_GMP ON)
  add_subdirectory("${CHEDDAR_SOURCE_DIR}" "${CMAKE_BINARY_DIR}/external/cheddar")

  if(DEFINED _CHEDDAR_SAVED_BUILD_UNITTEST)
    set(BUILD_UNITTEST ${_CHEDDAR_SAVED_BUILD_UNITTEST})
  else()
    unset(BUILD_UNITTEST)
  endif()
  if(DEFINED _CHEDDAR_SAVED_BUILD_TESTS)
    set(BUILD_TESTS ${_CHEDDAR_SAVED_BUILD_TESTS})
  else()
    unset(BUILD_TESTS)
  endif()
  if(DEFINED _CHEDDAR_SAVED_ENABLE_EXTENSION)
    set(ENABLE_EXTENSION ${_CHEDDAR_SAVED_ENABLE_EXTENSION})
  else()
    unset(ENABLE_EXTENSION)
  endif()
  if(DEFINED _CHEDDAR_SAVED_USE_GMP)
    set(USE_GMP ${_CHEDDAR_SAVED_USE_GMP})
  else()
    unset(USE_GMP)
  endif()

  if(NOT TARGET cheddar)
    message(FATAL_ERROR "CHEDDAR source configured but target 'cheddar' was not created")
  endif()

  if(DEFINED CMAKE_CUDA_ARCHITECTURES AND
     NOT "${CMAKE_CUDA_ARCHITECTURES}" STREQUAL "")
    set_property(TARGET cheddar PROPERTY CUDA_ARCHITECTURES
      "${CMAKE_CUDA_ARCHITECTURES}")
  endif()
  set_property(TARGET cheddar PROPERTY CUDA_SEPARABLE_COMPILATION OFF)
  target_compile_options(cheddar PRIVATE
    $<$<COMPILE_LANGUAGE:CXX>:-fcommon>
    $<$<COMPILE_LANGUAGE:CUDA>:-Xcompiler=-fcommon>)

  set(CHEDDAR_TARGET cheddar PARENT_SCOPE)
endfunction()
