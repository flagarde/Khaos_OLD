add_library(Headers INTERFACE)
message(STATUS "${PROJECT_SOURCE_DIR}/include ${CMAKE_INSTALL_INCLUDEDIR}")
target_include_directories(Headers INTERFACE $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include> $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)
add_library(Khaos::Headers ALIAS Headers)
