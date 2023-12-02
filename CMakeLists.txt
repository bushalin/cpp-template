cmake_minimum_required(VERSION 3.4.1)

project(SAMPLE_APP VERSION 1.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS YES)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage -std=c++17")

# Set up project variable if not defined
if (NOT DEFINED LIB_NAME OR NOT DEFINED APP_NAME OR NOT DEFINED BUILD_TARGET)
    set(LIB_NAME Custom_lib)
    set(APP_NAME SAMPLE_APP)
    set(SAMPLE_APP_DIFFERENT_BUILD SAMPLE_APP_X)
    set(BUILD_TARGET ${CMAKE_SYSTEM_PROCESSOR})
endif()

# Set up directory variables
# message(STATUS "LIBS_DIR: ${LIBS_DIR}")
# set(INCLUDES_DIR) ${CMAKE_CURRENT_SOURCE_DIR}/external}
set(PROJECT_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(INCLUDE_DIR ${PROJECT_DIR}/include)
set(SO_LIB_DIR ${PROJECT_DIR}/libs)
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)

## Setup output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build/bin)

## Setup include directory
set(EXTERNAL_INCLUDE_DIR ${INCLUDE_DIR}/external)

# set sub directory of external
set(RAPIDJSON_INCLUDE_DIR ${EXTERNAL_INCLUDE_DIR}/rapidjson)

set(APPLICATION_INCLUDE_DIR ${SRC_DIR}/app)

# Include headers and sources
include_directories(
    ${SRC_DIR}
    ${RAPIDJSON_INCLUDE_DIR}
    ${APPLICATION_INCLUDE_DIR}
)

# Include pre-compiled libraries from the install folder
# file(GLOB_RECURSE BUFFER_LIB_FILE "${SO_LIB_DIR}/sdk_lib/buffer/*.so*")
# file(GLOB_RECURSE EXTERNAL_LIB_FILES "${SO_LIB_DIR}/external/*.so*")

# Set Wrapper libs
# set(WRAPPER_LIBS "${SO_LIB_DIR}/wrapper_lib/libAWL_Engine_Wrapper.so")

add_subdirectory(${SRC_DIR})
