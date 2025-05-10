
#include "FirstLogin.h"
#include <iostream>
#include "../../User/User.h"
#include <random>

void FirstLogin::handleFirstLogin( User& loggedInUser) {
    std::cout << "Set up account!" << std::endl;
    std::cout << "--------------" << std::endl;
    std::cout << "Enter your withdrawal pin(4 numbers): ";
    std::string withdrawalPin;
    std::cin >> withdrawalPin;
    if (withdrawalPin.size() < 4 || withdrawalPin.size() > 4) {
        std::cout << "Pin must be 4 numbers long!" << std::endl;
    }

    std::string iban = "AT";
    for (int i = 0; i < 20;i++) {
        int randomNumber = rand() % 10;
        std::string stringNumber= std::to_string(randomNumber);
        iban += stringNumber;
    }
    std::cout << "Account setup complete!" << std::endl;
    std::cout << "Withdrawal pin: " << withdrawalPin << " || Iban: " << iban << std::endl;
    loggedInUser.setIban(iban);
    loggedInUser.setWithdrawalPin(withdrawalPin);
    loggedInUser.setFirstLogin(false);

}