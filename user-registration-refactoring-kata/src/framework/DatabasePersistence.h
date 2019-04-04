#ifndef LEGACY_TRAINING_CPP_DATABASEPERSISTENCE_H
#define LEGACY_TRAINING_CPP_DATABASEPERSISTENCE_H

#include <string>
#include <unordered_map>

#include "../domain/User.h"

using namespace std;


class DatabasePersistence {
private:
    unordered_map<string, User> users;

public:
    DatabasePersistence();

    void saveUser(User user);

    User findByEmail(string email);
};

#endif
