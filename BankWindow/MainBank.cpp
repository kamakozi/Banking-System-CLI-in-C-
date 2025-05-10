#include "MainBank.h"
#include <iostream>
#include "Register/Register.h"
#include "Login/Login.h"


void MainBank::run() {
    Login l;
    srand(static_cast<unsigned int>(time(0)));
    std::cout << "Welcome to make Bank!" << std::endl;
    int chooser{0};
    while (chooser != 6) {
        std::cout << "1.Login\n2.Register\nSelect: ";
        std::cin >> chooser;
        switch (chooser) {
            case 1:
                l.userLogin(*this);
                break;
            case 2:{
                User newUser = Register::registerUser();
                getUsers().push_back(newUser);

                    }
                break;

        }
    }
}

