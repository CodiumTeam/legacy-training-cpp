#include "User.h"
#include <string>

using namespace std;

User::User(int v_id, string v_name, string v_email, string v_password) {
    id = v_id;
    name = v_name;
    email = v_email;
    password = v_password;
}

int User::getId() {
    return id;
}

string User::getName() {
    return name;
}

string User::getEmail() {
    return email;
}

string User::getPassword() {
    return password;
}