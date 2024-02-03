cmake_minimum_required(VERSION 3.28)
include(ExternalProject)

project(app-two)



ExternalProject_Add(
    cmn-lib-one
    GIT_REPOSITORY https://github.com/lakshmanachimata/cmn-lib-one.git
    SOURCE_DIR        ${CMAKE_CURRENT_SOURCE_DIR}/cmn-lib-one
    BINARY_DIR        ${CMAKE_CURRENT_SOURCE_DIR}/cmn-lib-one
    GIT_TAG main
    CONFIGURE_COMMAND ""
    BUILD_COMMAND cmake -S ./ -B ./build && cmake --build build
    INSTALL_COMMAND ""
    TEST_COMMAND ""
)

ExternalProject_Add(
    cmn-lib-two
    GIT_REPOSITORY https://github.com/lakshmanachimata/cmn-lib-two.git
    SOURCE_DIR        ${CMAKE_CURRENT_SOURCE_DIR}/cmn-lib-two
    BINARY_DIR        ${CMAKE_CURRENT_SOURCE_DIR}/cmn-lib-two
    GIT_TAG main
    CONFIGURE_COMMAND ""
    BUILD_COMMAND cmake -S ./ -B ./build && cmake --build build
    INSTALL_COMMAND ""
    TEST_COMMAND ""
)

ExternalProject_Get_Property(cmn-lib-one install_dir)
include_directories(${install_dir})

ExternalProject_Get_Property(cmn-lib-two install_dir)
include_directories(${install_dir})

include_directories(${PROJECT_SOURCE_DIR} )


set(CMAKE_CXX_STANDARD 17)
FILE(GLOB app-two *.cpp)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_COLOR_MAKEFILE   ON)
add_executable(${PROJECT_NAME} ${app-two})

target_link_libraries(${PROJECT_NAME}  ${CMAKE_CURRENT_SOURCE_DIR}/cmn-lib-one/build/libcmn-lib-one.a ${CMAKE_CURRENT_SOURCE_DIR}/cmn-lib-two/build/libcmn-lib-two.a)
