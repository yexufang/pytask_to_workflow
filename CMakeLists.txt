# Works with 3.15 and tested through 3.31
cmake_minimum_required(VERSION 3.15...3.31)

# Project name and a few useful settings. Other commands can pick up the results
project(
  pytask_to_workflow
  VERSION 0.1
  DESCRIPTION "An UDP monitor project with CMake"
  LANGUAGES CXX)

add_subdirectory(submodules/workflow)

# The compiled library code is here
add_subdirectory(src)

# The executable code is here
add_subdirectory(apps)

# Testing only available if this is the main app
# Emergency override MODERN_CMAKE_BUILD_TESTING provided as well
if((CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME OR MODERN_CMAKE_BUILD_TESTING)
   AND BUILD_TESTING)
   add_subdirectory(tests)
endif()
