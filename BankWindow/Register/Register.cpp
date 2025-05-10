#include <iostream>
#include "../User/User.h"
#include "Register.h"

    User Register::registerUser(){
    std::cout << "Enter name: ";
    std::string userName;
    std::cin.ignore();
    getline(std::cin,userName);
    if (userName.empty()) {
        std::cout << "Name can't be empty!" << std::endl;
    }

    std::cout << "Enter age: ";
    int userAge{0};
    std::cin >> userAge;
    if (userAge < 18 || userAge > 99) {
        std::cout << "Age can't be lower than 18 or greater than 99" << std::endl;
        return User(0,0,0,0,0,0,0);
    }

    std::cout << "Enter password must be at least 4 characters long and must contain @\nType: ";
    std::string userPassword;
    std::cin >> userPassword;
    if (userPassword.empty()) {
        std::cout << "Password can't be empty!" << std::endl;
        return User(0,0,0,0,0,0,0);
    }
    if (userPassword.size() <3) {
        std::cout << "Password must contain at least 4 letters!" << std::endl;
        return User(0,0,0,0,0,0,0);
    }
    if (userPassword.find('@')) {
        constexpr bool firstLogin = true;
        std::cout << "Account created!" << std::endl;

        return {firstLogin,userName,"",userPassword,userAge,"",0};
    }else {
        std::cout << "Password must contain @!" << std::endl;
        return User(0,0,0,0,0,0,0);
    }

}
