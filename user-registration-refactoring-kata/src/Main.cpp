#include <iostream>

#include "framework/UserRegistrationController.h"

using namespace std;

int main(int, char *[]) {
    cout << "Application starts:" << endl;

    UserRegistrationController frameworkController;
    frameworkController.registerUser();

    return 0;
}