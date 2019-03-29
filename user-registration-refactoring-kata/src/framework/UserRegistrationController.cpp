#include <iostream>

#include "UserRegistrationController.h"
#include "../domain/User.h"

using namespace std;

UserRegistrationController::UserRegistrationController() {

}

void UserRegistrationController::registerUser() {
    cout << "UserRegistrationController:" << endl;

    User user(1234, "requestName", "requestEmail", "requestPassword");

    cout << "registered user is: " << user.getName() << endl;
    cout << "id: " << user.getId() << endl;
    cout << "name: " << user.getName() << endl;
    cout << "email: " << user.getEmail() << endl;
    cout << "password: " << user.getPassword() << endl;
    return;
}