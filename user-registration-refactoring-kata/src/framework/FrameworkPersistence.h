#ifndef LEGACY_TRAINING_CPP_FRAMEWORKPERSISTENCE_H
#define LEGACY_TRAINING_CPP_FRAMEWORKPERSISTENCE_H

#include <string>
#include <unordered_map>

#include "../domain/User.h"

using namespace std;


class FrameworkPersistence {
private:
    unordered_map<string, User> users;

public:
    FrameworkPersistence();

    void saveUser(User user);

    User findByEmail(string email);
};

#endif
