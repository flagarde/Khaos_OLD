include(Doctest)

add_executable(KhaosVersion.test KhaosVersion.test.cpp)
target_link_libraries(KhaosVersion.test PRIVATE Khaos::Headers doctest_with_main)
target_compile_definitions(KhaosVersion.test PRIVATE "-DMAJOR=${Khaos_VERSION_MAJOR}" "-DMINOR=${Khaos_VERSION_MINOR}" "-DPATCH=${Khaos_VERSION_PATCH}" "-DTWEAK=${Khaos_VERSION_TWEAK}")
doctest_discover_tests(KhaosVersion.test)

add_executable(UtilityMacros.test UtilityMacros.test.cpp)
target_link_libraries(UtilityMacros.test PRIVATE Khaos::Headers doctest_with_main)
doctest_discover_tests(UtilityMacros.test)
