#include <iostream>
#include "Login.h"
#include "../User/User.h"
#include "../MainBank.h"
#include "../BankMainMenu/MainMenu.h"


User Login::userLogin(MainBank& mainBank) {
    std::cout << "Welcome to login!" << std::endl;
    std::cout << "-----------------\n" << std::endl;
    std::cout << "Enter username: " << std::endl;
    std::string userName;
    std::cin.ignore();
    getline(std::cin,userName);

    //Username checker
    bool foundName = false;
    for (int i = 0;i < mainBank.getUsers().size();i++) {
        if (mainBank.getUsers()[i].getName() == userName) {
            foundName = true;
        }
    }
    if (!foundName) {
        std::cout << "Account not found!" << std::endl;
        return User(0,0,0,0,0,0,0);
    }
    std::cout << "Hey " << userName << "!" << std::endl;

    //Password checker
    int attempts = 0;
    bool findUser = false;
    std::string userPassword;

    int foundUser = -1;
    while (attempts < 3 && !findUser) {
        std::cout << "Enter password: ";
        std::cin >> userPassword;
        for (int i = 0; i < mainBank.getUsers().size(); i++) {

            if (mainBank.getUsers()[i].getName() == userName && mainBank.getUsers()[i].getPassword() == userPassword) {
                findUser = true;
                foundUser = i;
                break;
            }
        }

        if (!findUser) {
            attempts++;
            std::cout << "Wrong password! Attempts left: " << (3 - attempts) << std::endl;
        }
    }

    if (findUser) {
        std::cout << "Login successful. Welcome " << userName << std::endl;
        User loggedInUser = mainBank.getUsers()[foundUser];
        MainMenu menu;
        menu.mainMenu(loggedInUser);

    } else {
        std::cout << "Unable to login after 3 attempts!" << std::endl;
    }
}

