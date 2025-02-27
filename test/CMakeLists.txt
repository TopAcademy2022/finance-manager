# For example
set(
    TEST_MAIN
        ./test-main.cpp

	../finance-manager/menu.h
	../finance-manager/menu.cpp
	../finance-manager/user.h
	../finance-manager/user.cpp
	../finance-manager/wallet.h
	../finance-manager/wallet.cpp
	../finance-manager/card.h
	../finance-manager/card.cpp
)

set(NAME_TEST_MAIN test-main)

if(WIN32)
	# Switch BOOST_ROOT and BOOST_LIBRARYDIR if FIRST_BOOST_INSTALL != ON
    set (BOOST_ROOT "../library/boost_1_80_0")
    set (BOOST_LIBRARYDIR "../library/boost_1_80_0/stage/lib")
endif()

find_package(Boost 1.80.0 COMPONENTS date_time unit_test_framework REQUIRED)

add_executable(${NAME_TEST_MAIN} ${TEST_MAIN})

target_include_directories(${NAME_TEST_MAIN} PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries(${NAME_TEST_MAIN} PRIVATE Boost::unit_test_framework)

set_target_properties(
    ${NAME_TEST_MAIN} PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)

add_test(${NAME_TEST_MAIN} ${NAME_TEST_MAIN})

# Build the program after successfully passing all tests
add_custom_command(
	TARGET ${NAME_TEST_MAIN}
	COMMENT "Run tests"
	POST_BUILD
	COMMAND ${CMAKE_CTEST_COMMAND}
)
