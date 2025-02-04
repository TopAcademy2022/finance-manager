cmake_minimum_required(VERSION 3.0)

project(finance-manager VERSION 0.0.1 LANGUAGES CXX)

set(
    CORE
        finance-manager/finance-manager.cpp
)

add_executable(FinanceManager ${CORE})

target_include_directories(FinanceManager
    PRIVATE
    finance-manager/
)

set_target_properties(
    FinanceManager PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
)