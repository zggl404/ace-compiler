#=============================================================================
#
# Copyright (c) Ant Group Co., Ltd
# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
#
#=============================================================================

include(${CMAKE_CURRENT_SOURCE_DIR}/../cmake/modules/heongpu.cmake)

if(NOT RTLIB_ENABLE_CUDA)
  message(FATAL_ERROR "HEonGPU backend requires RTLIB_ENABLE_CUDA=ON")
endif()

build_external_heongpu()

file(GLOB_RECURSE RT_HEONGPU_SRC_FILES CONFIGURE_DEPENDS src/*.cu)

set(RT_HEONGPU_INCLUDE_DIRS "")
list(APPEND RT_HEONGPU_INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/include")
list(APPEND RT_HEONGPU_INCLUDE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}/include")
include_directories(${RT_HEONGPU_INCLUDE_DIRS})
set(RT_HEONGPU_INCLUDE_DIRS "${RT_HEONGPU_INCLUDE_DIRS}" CACHE INTERNAL "")

add_library(fhert_heongpu_obj OBJECT ${RT_HEONGPU_SRC_FILES})
set_property(TARGET fhert_heongpu_obj PROPERTY POSITION_INDEPENDENT_CODE 1)
set_target_properties(fhert_heongpu_obj PROPERTIES CUDA_SEPARABLE_COMPILATION ON)
target_link_libraries(fhert_heongpu_obj PUBLIC ${HEONGPU_TARGET})

if(BUILD_STATIC)
  add_library(FHErt_heongpu STATIC $<TARGET_OBJECTS:fhert_heongpu_obj>)
  set_property(TARGET FHErt_heongpu PROPERTY RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/rtlib/lib)
  set_target_properties(FHErt_heongpu PROPERTIES CUDA_SEPARABLE_COMPILATION ON)
  add_dependencies(FHErt_heongpu rtlib_depend)
  target_link_libraries(FHErt_heongpu PUBLIC ${HEONGPU_TARGET} FHErt_common)
  install(TARGETS FHErt_heongpu EXPORT FHETargets DESTINATION rtlib/lib)
endif()

add_custom_target(fhert_heongpu_all)

if(BUILD_STATIC)
  set(FHERT_HEONGPU_LIB ${FHERT_HEONGPU_LIB} PUBLIC FHErt_heongpu ${HEONGPU_TARGET} FHErt_common)
  add_dependencies(fhert_heongpu_all FHErt_heongpu)
endif()

set(FHERT_HEONGPU_EGAPP "")
if(RTLIB_BUILD_EXAMPLE)
  file(GLOB FHERT_HEONGPU_EXAMPLE_SRC_FILES CONFIGURE_DEPENDS example/*.cu)
  foreach(app ${FHERT_HEONGPU_EXAMPLE_SRC_FILES})
    get_filename_component(exe ${app} NAME_WE)
    add_executable(${exe} ${app})
    set_property(TARGET ${exe} PROPERTY RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/example)
    set(FHERT_HEONGPU_EGAPP ${FHERT_HEONGPU_EGAPP} ${exe})
    target_link_libraries(${exe} ${FHERT_HEONGPU_LIB} ${NN_LIBS} ${CUDA_LIBRARIES})
  endforeach()

  add_custom_target(fhert_heongpu_example)
  add_dependencies(fhert_heongpu_example ${FHERT_HEONGPU_EGAPP})
  add_dependencies(fhert_heongpu_all fhert_heongpu_example)
endif()

if(RTLIB_INSTALL_APP)
  install(TARGETS ${FHERT_HEONGPU_EGAPP} RUNTIME DESTINATION example)
endif()
