
#ifndef MAINBANK_H
#define MAINBANK_H
#include <vector>
#include "User/User.h"

class MainBank {
protected:
    std::vector<User>users;
public:
    void run();
    std::vector<User>&getUsers() {
        return users;
    }
};



#endif //MAINBANK_H
