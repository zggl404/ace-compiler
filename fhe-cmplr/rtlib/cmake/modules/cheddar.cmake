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
  set(CHEDDAR_URL "https://github.com/zggl404/cheddar-fhe.git")
  set(CHEDDAR_URL_SSH "git@github.com:zggl404/cheddar-fhe.git")
  set(CHEDDAR_GIT_TAG "main")

  if(DEFINED ENV{RTLIB_CHEDDAR_SOURCE_DIR} AND
     IS_DIRECTORY "$ENV{RTLIB_CHEDDAR_SOURCE_DIR}")
    set(CHEDDAR_SOURCE_DIR "$ENV{RTLIB_CHEDDAR_SOURCE_DIR}")
  elseif(IS_DIRECTORY "${CHEDDAR_DEFAULT_SOURCE_DIR}")
    set(CHEDDAR_SOURCE_DIR "${CHEDDAR_DEFAULT_SOURCE_DIR}")
  else()
    include(FetchContent)

    if(EXTERNAL_URL_SSH)
      set(REPO_CHEDDAR_URL ${CHEDDAR_URL_SSH})
    else()
      set(REPO_CHEDDAR_URL ${CHEDDAR_URL})
    endif()
    if(DEFINED ENV{RTLIB_CHEDDAR_REPO_URL} AND
       NOT "$ENV{RTLIB_CHEDDAR_REPO_URL}" STREQUAL "")
      set(REPO_CHEDDAR_URL "$ENV{RTLIB_CHEDDAR_REPO_URL}")
    endif()
    if(DEFINED ENV{RTLIB_CHEDDAR_GIT_TAG} AND
       NOT "$ENV{RTLIB_CHEDDAR_GIT_TAG}" STREQUAL "")
      set(CHEDDAR_GIT_TAG "$ENV{RTLIB_CHEDDAR_GIT_TAG}")
    endif()

    message(STATUS "Cloning External Repository   : ${REPO_CHEDDAR_URL} @ ${CHEDDAR_GIT_TAG}")
    FetchContent_Declare(
      cheddar_external
      GIT_REPOSITORY ${REPO_CHEDDAR_URL}
      GIT_TAG ${CHEDDAR_GIT_TAG}
      GIT_SHALLOW TRUE
    )
    FetchContent_GetProperties(cheddar_external)
    if(NOT cheddar_external_POPULATED)
      if(POLICY CMP0169)
        cmake_policy(PUSH)
        cmake_policy(SET CMP0169 OLD)
      endif()
      FetchContent_Populate(cheddar_external)
      if(POLICY CMP0169)
        cmake_policy(POP)
      endif()
    endif()
    set(CHEDDAR_SOURCE_DIR "${cheddar_external_SOURCE_DIR}")
  endif()

  message(STATUS "Using CHEDDAR source           : ${CHEDDAR_SOURCE_DIR}")

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
  set(ENABLE_EXTENSION ON)
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
