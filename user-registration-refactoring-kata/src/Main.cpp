#include <iostream>

#include "framework/HttpFrameworkRequest.h"
#include "framework/UserRegistrationController.h"

using namespace std;

int main(int, char *[]) {
    cout << "Application starts:" << endl;

    HttpFrameworkRequest httpFrameworkRequest;

    UserRegistrationController frameworkController;
    frameworkController.registerUser(httpFrameworkRequest);

    return 0;
}