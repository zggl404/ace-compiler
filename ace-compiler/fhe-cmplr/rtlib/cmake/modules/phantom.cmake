#=============================================================================
#
# Copyright (c) Ant Group Co., Ltd
# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
#
#=============================================================================

function(_validate_phantom_source_dir source_dir result_var)
  set(is_valid FALSE)
  if(IS_DIRECTORY "${source_dir}" AND EXISTS "${source_dir}/CMakeLists.txt")
    set(is_valid TRUE)
  endif()
  set(${result_var} ${is_valid} PARENT_SCOPE)
endfunction()

# Build external Phantom project dependent function
function(build_external_phantom)
  set(PHANTOM_CMAKE_ARGS -DCMAKE_BUILD_TYPE=Release)
  if(DEFINED CMAKE_CUDA_COMPILER AND NOT "${CMAKE_CUDA_COMPILER}" STREQUAL "")
    list(APPEND PHANTOM_CMAKE_ARGS -DCMAKE_CUDA_COMPILER=${CMAKE_CUDA_COMPILER})
  endif()
  if(DEFINED CMAKE_CUDA_ARCHITECTURES AND NOT "${CMAKE_CUDA_ARCHITECTURES}" STREQUAL "")
    list(APPEND PHANTOM_CMAKE_ARGS -DCMAKE_CUDA_ARCHITECTURES=${CMAKE_CUDA_ARCHITECTURES})
  endif()

  include(ExternalProject)
  set(PHANTOM_GIT_TAG "master")

  if(DEFINED ENV{RTLIB_PHANTOM_SOURCE_DIR} AND
     NOT "$ENV{RTLIB_PHANTOM_SOURCE_DIR}" STREQUAL "")
    _validate_phantom_source_dir("$ENV{RTLIB_PHANTOM_SOURCE_DIR}" phantom_env_source_valid)
    if(NOT phantom_env_source_valid)
      message(FATAL_ERROR
        "RTLIB_PHANTOM_SOURCE_DIR does not point to a valid Phantom source tree: "
        "$ENV{RTLIB_PHANTOM_SOURCE_DIR}")
    endif()
    set(PHANTOM_SOURCE_DIR "$ENV{RTLIB_PHANTOM_SOURCE_DIR}")
  endif()

  if(DEFINED PHANTOM_SOURCE_DIR)
    message(STATUS "Using local Phantom source      : ${PHANTOM_SOURCE_DIR}")
    ExternalProject_Add(
      phantom_external
      SOURCE_DIR ${PHANTOM_SOURCE_DIR}
      PREFIX ${CMAKE_BINARY_DIR}/external
      UPDATE_COMMAND ""
      BUILD_ALWAYS OFF
      CMAKE_ARGS ${PHANTOM_CMAKE_ARGS}
      BUILD_COMMAND ${CMAKE_COMMAND} --build <BINARY_DIR>
      INSTALL_COMMAND ""
      BUILD_BYPRODUCTS ${CMAKE_BINARY_DIR}/external/src/phantom_external-build/lib/libphantom.a
    )
  else()
    set(PHANTOM_URL      "https://github.com/zggl404/phantom-fhe.git")
    set(PHANTOM_URL_SSH  "git@github.com:zggl404/phantom-fhe.git")
    if(EXTERNAL_URL_SSH)
      set(REPO_PHANTOM_URL ${PHANTOM_URL_SSH})
    else()
      set(REPO_PHANTOM_URL ${PHANTOM_URL})
    endif()
    if(DEFINED ENV{RTLIB_PHANTOM_REPO_URL} AND NOT "$ENV{RTLIB_PHANTOM_REPO_URL}" STREQUAL "")
      set(REPO_PHANTOM_URL "$ENV{RTLIB_PHANTOM_REPO_URL}")
    endif()
    if(DEFINED ENV{RTLIB_PHANTOM_GIT_TAG} AND
       NOT "$ENV{RTLIB_PHANTOM_GIT_TAG}" STREQUAL "")
      set(PHANTOM_GIT_TAG "$ENV{RTLIB_PHANTOM_GIT_TAG}")
    endif()

    message(STATUS "Cloning External Repository   : ${REPO_PHANTOM_URL} @ ${PHANTOM_GIT_TAG}")
    ExternalProject_Add(
      phantom_external
      GIT_REPOSITORY ${REPO_PHANTOM_URL}
      GIT_TAG ${PHANTOM_GIT_TAG}
      PREFIX ${CMAKE_BINARY_DIR}/external
      UPDATE_COMMAND ""
      BUILD_ALWAYS OFF
      CMAKE_ARGS ${PHANTOM_CMAKE_ARGS}
      BUILD_COMMAND ${CMAKE_COMMAND} --build <BINARY_DIR>
      INSTALL_COMMAND ""
      BUILD_BYPRODUCTS ${CMAKE_BINARY_DIR}/external/src/phantom_external-build/lib/libphantom.a
    )
  endif()
  ExternalProject_Get_Property(phantom_external SOURCE_DIR BINARY_DIR)

  find_library(NTL_LIBRARY ntl)
  find_library(GMP_LIBRARY gmp)
  find_library(GMPXX_LIBRARY gmpxx)

  if(NOT NTL_LIBRARY OR NOT GMP_LIBRARY OR NOT GMPXX_LIBRARY)
    message(FATAL_ERROR "NTL or GMP libraries not found")
  endif()

  add_library(phantom IMPORTED STATIC GLOBAL)
  set_target_properties(phantom PROPERTIES
    IMPORTED_LOCATION ${BINARY_DIR}/lib/libphantom.a
  )
  include_directories(${SOURCE_DIR}/include)
  add_dependencies(phantom phantom_external)

  set(phantom phantom PARENT_SCOPE)
  set(ENV{PHANTOM_INCLUDE_DIR} ${SOURCE_DIR}/include)
  set(PHANTOM_LIBS phantom ${NTL_LIBRARY} ${GMPXX_LIBRARY} ${GMP_LIBRARY} PARENT_SCOPE)
  
  
endfunction()
