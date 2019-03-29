#include <iostream>

#include "HttpFrameworkRequest.h"
#include "UserRegistrationController.h"
#include "../domain/User.h"

using namespace std;

UserRegistrationController::UserRegistrationController() {

}

void UserRegistrationController::registerUser(HttpFrameworkRequest request) {
    cout << "UserRegistrationController:" << endl;

    srand (time(NULL));
    int userId = rand() % 1000 + 1;
    User user(userId, request.getParameter("name"), request.getParameter("email"), request.getParameter("password"));

    cout << "registered user is: " << endl;
    cout << "- id: " << user.getId() << endl;
    cout << "- name: " << user.getName() << endl;
    cout << "- email: " << user.getEmail() << endl;
    cout << "- password: " << user.getPassword() << endl;
    return;
}