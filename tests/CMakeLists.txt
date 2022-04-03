include(Doctest)

add_executable(UtilityMacros.test UtilityMacros.test.cpp)
target_link_libraries(UtilityMacros.test PRIVATE Khaos::Headers doctest_with_main)
doctest_discover_tests(UtilityMacros.test)
