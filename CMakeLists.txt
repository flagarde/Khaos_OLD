cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

list(INSERT CMAKE_MODULE_PATH 0 "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include(GetCMakeMM)
cmmm(VERSION 2.2 PROVIDER github REPOSITORY flagarde/CMakeMM VERBOSITY VERBOSE DESTINATION CMakeMM)

cmmm_modules_list(PROVIDER github REPOSITORY "flagarde/CMakeCM")

option(BUILD_TESTS "Build the tests" ON)

project(Khaos VERSION 0.0.1 DESCRIPTION "" HOMEPAGE_URL "https://github.com/flagarde/Khaos" LANGUAGES C CXX)

add_subdirectory(src)

if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(tests)
endif()
