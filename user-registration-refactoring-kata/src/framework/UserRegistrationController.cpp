#include <iostream>
#include <sstream>

#include "FrameworkPersistence.h"
#include "HttpFrameworkRequest.h"
#include "HttpFrameworkResponse.h"
#include "UserRegistrationController.h"
#include "../domain/User.h"

using namespace std;

UserRegistrationController::UserRegistrationController() {

}

HttpFrameworkResponse UserRegistrationController::registerUser(HttpFrameworkRequest request) {
    cout << "UserRegistrationController:" << endl;

    if (request.getParameter("password").length() <= 8 || request.getParameter("password").find("_") == string::npos) {
        HttpFrameworkResponse response("The password is not valid", 400);
        return response;
    }

    try {
        User userAlreadyRegistered = persistence.findByEmail(request.getParameter("email"));
        HttpFrameworkResponse response("The email is already in use", 400);
        return response;
    }
    catch (...) {
        // Continue if the email was not found
    }

    srand (time(NULL));
    int userId = rand() % 1000 + 1;
    User user(userId, request.getParameter("name"), request.getParameter("email"), request.getParameter("password"));

    cout << "registered user is: " << endl;
    cout << "- id: " << user.getId() << endl;
    cout << "- name: " << user.getName() << endl;
    cout << "- email: " << user.getEmail() << endl;
    cout << "- password: " << user.getPassword() << endl;

    persistence.saveUser(user);

    stringstream responseMsg;
    responseMsg << "new User id is " << user.getId();
    HttpFrameworkResponse response(responseMsg.str(), 200);

    return response;
}