#ifndef LEGACY_TRAINING_CPP_USER_H
#define LEGACY_TRAINING_CPP_USER_H

#include <string>

using namespace std;

class User {
private:
    int id;
    string name;
    string email;
    string password;
public:
    User(int id, string name, string email, string password);

    int getId();

    string getName();

    string getEmail();

    string getPassword();
};

#endif //LEGACY_TRAINING_CPP_USER_H
