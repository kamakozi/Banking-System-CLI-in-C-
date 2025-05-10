#ifndef USER_H
#define USER_H

#include <string>



class User {
protected:
    bool firstLogin = true;
    std::string name;
    std::string iban;
    std::string password;
    int age{0};
    std::string withdrawalPin;
    float balance;

public:
    User(bool firstLogin,std::string name,std::string iban,std::string password,int age,std::string withdrawalPin,float balance);

    [[nodiscard]] std::string getName()const;
    [[nodiscard]] std::string getIban()const;
    [[nodiscard]]std::string getPassword()const;
    [[nodiscard]] std::string getWithdrawalPin()const;
    [[nodiscard]] int getAge()const;
    [[nodiscard]] bool getFirstLogin()const;
    [[nodiscard]] float getBalance();
    void setFirstLogin(bool status);

    float addFunds();
    float withdrawal(User& loggedInUser);
    void printInfo()const;
    void setIban(const std::string& iban);
    void setWithdrawalPin(const std::string& pin);

};



#endif //USER_H
