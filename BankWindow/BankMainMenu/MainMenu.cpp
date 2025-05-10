
#include "MainMenu.h"
#include "../User/User.h"
#include "FirstTimeLogin/FirstLogin.h"
#include <iostream>


float User::addFunds() {
    std::cout << "How much money would you like to add?: ";
    float amountDeposited;
    std::cin >> amountDeposited;
    if (amountDeposited < 1 || amountDeposited > 10000) {
        std::cout << "You can't deposit less than 1€ or more than 10'000€" << std::endl;
    }

    std::cout << "Deposit successful for " << amountDeposited << "€" << std::endl;
    return balance+= amountDeposited;
}

float User::withdrawal(User& loggedInUser) {
    std::cout << "Current balance: " << loggedInUser.getBalance() << "€" << std::endl;
    std::cout << "How much would you like to withdrew: ";
    float amount{0};
    std::cin >> amount;
    if (amount < loggedInUser.getBalance()) {
        std::cout << "Not enough funds!" << std::endl;
    }
    std::string pin;
    std::cout << "Enter withdrawal pin: ";
    std::cin >> pin;
    if (pin != withdrawalPin) {
        std::cout << "Wrong withdrawal pin!" << std::endl;
    }
    std::cout << "Successfully withdrew " << amount << "€" << std::endl;
    return loggedInUser.getBalance()-amount;

}


void MainMenu::mainMenu( User& loggedInUser) {
 if (loggedInUser.getFirstLogin() == true) {
     FirstLogin first;
     first.handleFirstLogin(loggedInUser);
 }
    std::cout << "Welcome " << loggedInUser.getName() << std::endl;
    int chooser{0};
    while (chooser != 4) {
        std::cout << "---------------------" << std::endl;
        std::cout << "1.Add funds\n"
                     "2.Withdrawal\n"
                     "3.Account info\n"
                     "4.Log out\n"
                     "Select: ";
        std::cin >> chooser;
        switch (chooser) {
            case 1:
                loggedInUser.addFunds();
                break;
            case 2:
                loggedInUser.withdrawal(loggedInUser);
                break;
            case 3:
                loggedInUser.printInfo();
                break;
            case 4:
                std::cout << "Logging off..." << std::endl;
                break;
        }
    }

}

