#=============================================================================
#
# Copyright (c) Ant Group Co., Ltd
# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
#
#=============================================================================

include(${CMAKE_CURRENT_SOURCE_DIR}/../cmake/modules/cheddar.cmake)

if(NOT RTLIB_ENABLE_CUDA)
  message(FATAL_ERROR "CHEDDAR backend requires RTLIB_ENABLE_CUDA=ON")
endif()

build_external_cheddar()

file(GLOB_RECURSE RT_CHEDDAR_SRC_FILES CONFIGURE_DEPENDS src/*.cu)

set(RT_CHEDDAR_INCLUDE_DIRS "")
list(APPEND RT_CHEDDAR_INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/include")
list(APPEND RT_CHEDDAR_INCLUDE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}/include")
include_directories(${RT_CHEDDAR_INCLUDE_DIRS})
set(RT_CHEDDAR_INCLUDE_DIRS "${RT_CHEDDAR_INCLUDE_DIRS}" CACHE INTERNAL "")

add_library(fhert_cheddar_obj OBJECT ${RT_CHEDDAR_SRC_FILES})
set_property(TARGET fhert_cheddar_obj PROPERTY POSITION_INDEPENDENT_CODE 1)
target_link_libraries(fhert_cheddar_obj PUBLIC ${CHEDDAR_TARGET})

if(BUILD_STATIC)
  add_library(FHErt_cheddar STATIC $<TARGET_OBJECTS:fhert_cheddar_obj>)
  set_property(TARGET FHErt_cheddar PROPERTY RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/rtlib/lib)
  add_dependencies(FHErt_cheddar rtlib_depend)
  target_link_libraries(FHErt_cheddar PUBLIC ${CHEDDAR_TARGET} FHErt_common)
  install(TARGETS FHErt_cheddar EXPORT FHETargets DESTINATION rtlib/lib)
endif()

add_custom_target(fhert_cheddar_all)

if(BUILD_STATIC)
  set(FHERT_CHEDDAR_LIB ${FHERT_CHEDDAR_LIB} PUBLIC
      FHErt_cheddar ${CHEDDAR_TARGET} FHErt_common)
  add_dependencies(fhert_cheddar_all FHErt_cheddar)
endif()

set(FHERT_CHEDDAR_EGAPP "")
if(RTLIB_BUILD_EXAMPLE)
  file(GLOB FHERT_CHEDDAR_EXAMPLE_SRC_FILES CONFIGURE_DEPENDS example/*.cu)
  foreach(app ${FHERT_CHEDDAR_EXAMPLE_SRC_FILES})
    get_filename_component(exe ${app} NAME_WE)
    add_executable(${exe} ${app})
    set_property(TARGET ${exe} PROPERTY RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/example)
    set(FHERT_CHEDDAR_EGAPP ${FHERT_CHEDDAR_EGAPP} ${exe})
    target_link_libraries(${exe} ${FHERT_CHEDDAR_LIB} ${NN_LIBS} ${CUDA_LIBRARIES})
  endforeach()

  add_custom_target(fhert_cheddar_example)
  add_dependencies(fhert_cheddar_example ${FHERT_CHEDDAR_EGAPP})
  add_dependencies(fhert_cheddar_all fhert_cheddar_example)
endif()

if(RTLIB_INSTALL_APP)
  install(TARGETS ${FHERT_CHEDDAR_EGAPP} RUNTIME DESTINATION example)
endif()
