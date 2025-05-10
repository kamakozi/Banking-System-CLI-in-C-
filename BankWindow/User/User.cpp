#include "User.h"
#include <string>
#include <utility>
#include <iostream>

User::User(bool firstLogin, std::string name, std::string iban, std::string password, int age, std::string withdrawalPin,float balance):
firstLogin(firstLogin),
name(std::move(name)),
iban(std::move(iban)),
password(std::move(password)),
age(age),withdrawalPin(withdrawalPin,
this->balance = balance){
}

std::string User::getName() const {
    return name;
}
std::string User::getIban() const {
    return iban;
}
std::string User::getPassword() const {
    return password;
}
std::string User::getWithdrawalPin() const {
    return withdrawalPin;
}
int User::getAge() const {
    return age;
}
bool User::getFirstLogin() const {
    return firstLogin;
}
void User::setFirstLogin(bool status) {
    firstLogin = status;
}
float User::getBalance() {
    return balance;
}
void User::printInfo() const {
    std::cout << "-----------------" << std::endl;
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Iban: " << iban << "\n";
    std::cout << "Balance: " << balance << "€" << "\n";
    std::cout << "Password: " << password << "\n";
    std::cout << "WithdrawalPin: " << withdrawalPin <<"\n";

}
void User::setIban(const std::string& iban) { this->iban = iban; }
void User::setWithdrawalPin(const std::string& pin) { this->withdrawalPin = pin; }









