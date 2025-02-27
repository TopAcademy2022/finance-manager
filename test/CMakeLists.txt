# For example
set(
    TEST_REBALANCE
        ./test-rebalance.cpp
)

set(NAME_TEST_REBALANCE test-rebalance)

if(WIN32)
	# Switch BOOST_ROOT and BOOST_LIBRARYDIR if FIRST_BOOST_INSTALL != ON
    set (BOOST_ROOT "../library/boost_1_80_0")
    set (BOOST_LIBRARYDIR "../library/boost_1_80_0/stage/lib")
endif()

find_package(Boost 1.80.0 COMPONENTS date_time unit_test_framework REQUIRED)

add_executable(${NAME_TEST_REBALANCE} ${TEST_REBALANCE})

target_include_directories(${NAME_TEST_REBALANCE} PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries(${NAME_TEST_REBALANCE} PRIVATE Boost::unit_test_framework)

set_target_properties(
    ${NAME_TEST_REBALANCE} PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
)

add_test(${NAME_TEST_REBALANCE} ${NAME_TEST_REBALANCE})

# Build the program after successfully passing all tests
add_custom_command(
	TARGET ${NAME_TEST_REBALANCE}
	COMMENT "Run tests"
	POST_BUILD
	COMMAND ${CMAKE_CTEST_COMMAND}
)
