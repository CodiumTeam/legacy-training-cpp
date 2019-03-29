#include <iostream>

#include "framework/HttpFrameworkResponse.h"
#include "framework/HttpFrameworkRequest.h"
#include "framework/UserRegistrationController.h"

using namespace std;

int main(int, char *[]) {
    cout << "Application starts:" << endl;

    HttpFrameworkRequest httpFrameworkRequest;
    httpFrameworkRequest.setParameter("name", "Mario Bros");
    httpFrameworkRequest.setParameter("email", "mario@bros.com");
    httpFrameworkRequest.setParameter("password", "aValidPa_");

    UserRegistrationController frameworkController;
    HttpFrameworkResponse httpFrameworkResponse = frameworkController.registerUser(httpFrameworkRequest);

    cout << "Framework call response: " << httpFrameworkResponse.getResponse() << endl;
    cout << "Framework call httpStatus: " << httpFrameworkResponse.getHttpStatus() << endl;

    return 0;
}