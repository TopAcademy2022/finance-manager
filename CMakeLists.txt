cmake_minimum_required(VERSION 3.5)

project(finance-manager VERSION 0.0.1 LANGUAGES CXX)

set(
    CORE
        finance-manager/finance-manager.cpp

        finance-manager/wallet.h
        finance-manager/wallet.cpp

        finance-manager/user.h
        finance-manager/user.cpp

        finance-manager/menu.h
        finance-manager/menu.cpp

        finance-manager/helper.h
        finance-manager/helper.cpp

        finance-manager/card.h
        finance-manager/card.cpp

        finance-manager/card-operation.h
        finance-manager/card-operation.cpp

        finance-manager/categories.h

        finance-manager/cost.h
        finance-manager/cost.cpp

        finance-manager/deposit.h
        finance-manager/deposit.cpp

        finance-manager/history.h
        finance-manager/history.cpp

        finance-manager/history-operation.h
        finance-manager/history-operation.cpp

        finance-manager/history-period.h

        finance-manager/models/report.h

        finance-manager/services/report-service.h
        finance-manager/services/report-service.cpp
)

add_executable(FinanceManager ${CORE})

target_include_directories(FinanceManager
    PRIVATE
    finance-manager/
    finance-manager/models/
    finance-manager/services/
)

set_target_properties(
    FinanceManager PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
)