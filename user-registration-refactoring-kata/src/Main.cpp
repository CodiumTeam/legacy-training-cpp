#include <iostream>

#include "framework/HttpFrameworkRequest.h"
#include "framework/UserRegistrationController.h"

using namespace std;

int main(int, char *[]) {
    cout << "Application starts:" << endl;

    HttpFrameworkRequest httpFrameworkRequest;
    httpFrameworkRequest.setParameter("name", "Mario Bros");
    httpFrameworkRequest.setParameter("email", "mario@bros.com");
    httpFrameworkRequest.setParameter("password", "aValidPassword");

    UserRegistrationController frameworkController;
    frameworkController.registerUser(httpFrameworkRequest);

    return 0;
}