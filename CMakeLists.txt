cmake_minimum_required(VERSION 3.31)
project(BankingSystem)

set(CMAKE_CXX_STANDARD 17)

add_executable(BankingSystem
        main.cpp
        BankWindow/MainBank.cpp
        BankWindow/User/User.cpp
        BankWindow/Register/Register.cpp
        BankWindow/Login/Login.cpp
        BankWindow/BankMainMenu/MainMenu.cpp
        BankWindow/BankMainMenu/FirstTimeLogin/FirstLogin.cpp)
target_sources(BankingSystem PRIVATE
        BankWindow/MainBank.h
        BankWindow/User/User.h
        BankWindow/Register/Register.h
        BankWindow/Login/Login.h
        BankWindow/BankMainMenu/MainMenu.h
        BankWindow/BankMainMenu/FirstTimeLogin/FirstLogin.h)