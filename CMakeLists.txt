# CMake entry point
cmake_minimum_required(VERSION 3.0)
project("TestGLThread")

set(ROOT_PATH "${PROJECT_SOURCE_DIR}")
set(DEPENDENCIES_PATH "${PROJECT_SOURCE_DIR}/3rdParty")
set(SAMPLE_PATH "${PROJECT_SOURCE_DIR}/case")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_definitions(-D_CRT_SECURE_NO_WARNINGS)
add_subdirectory(3rdParty)
add_subdirectory(cases)
