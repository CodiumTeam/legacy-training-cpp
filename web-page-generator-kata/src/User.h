#ifndef LEGACY_TRAINING_CPP_USER_H
#define LEGACY_TRAINING_CPP_USER_H
#include <string>

using namespace std;

class User
{
private:
public:
    string name;
    string biography;
    User(string a_name, string a_biography);
};

#endif //LEGACY_TRAINING_CPP_USER_H
