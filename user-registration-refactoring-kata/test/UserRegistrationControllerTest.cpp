#include "string.h"

#include "UserRegistrationControllerTest.h"
#include "../src/framework/FrameworkPersistence.h"
#include "../src/framework/HttpFrameworkResponse.h"
#include "../src/framework/HttpFrameworkRequest.h"
#include "../src/framework/UserRegistrationController.h"

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( UserRegistrationControllerTest );


void UserRegistrationControllerTest::setUp() {
}

void UserRegistrationControllerTest::tearDown() {
}

void UserRegistrationControllerTest::should_success_when_everything_is_valid() {
    HttpFrameworkRequest httpFrameworkRequest;
    httpFrameworkRequest.setParameter("name", "aName");
    httpFrameworkRequest.setParameter("email", "my_email@my_company.com");
    httpFrameworkRequest.setParameter("password", "aValidPassword_");
    UserRegistrationController frameworkController;

    HttpFrameworkResponse httpFrameworkResponse = frameworkController.registerUser(httpFrameworkRequest);

    CPPUNIT_ASSERT_EQUAL(200, httpFrameworkResponse.getHttpStatus());
}

void UserRegistrationControllerTest::should_return_the_new_registered_user_id_when_everything_is_valid() {
    HttpFrameworkRequest httpFrameworkRequest;
    httpFrameworkRequest.setParameter("name", "aName");
    httpFrameworkRequest.setParameter("email", "my_email@my_company.com");
    httpFrameworkRequest.setParameter("password", "aValidPassword_");
    UserRegistrationController frameworkController;

    HttpFrameworkResponse httpFrameworkResponse = frameworkController.registerUser(httpFrameworkRequest);

    string response = httpFrameworkResponse.getResponse();
    string expectedResponse = "new User id is ";
    string userId = response.erase(0, expectedResponse.length());
    int finalId = stoi(userId);
    CPPUNIT_ASSERT(finalId > 0);
}

void UserRegistrationControllerTest::should_fail_when_password_is_short() {
    HttpFrameworkRequest httpFrameworkRequest;
    httpFrameworkRequest.setParameter("name", "aName");
    httpFrameworkRequest.setParameter("email", "my_email@my_company.com");
    httpFrameworkRequest.setParameter("password", "invalid_");
    UserRegistrationController frameworkController;

    HttpFrameworkResponse httpFrameworkResponse = frameworkController.registerUser(httpFrameworkRequest);

    CPPUNIT_ASSERT_EQUAL(400, httpFrameworkResponse.getHttpStatus());
    string expectedResponse = "The password is not valid";
    CPPUNIT_ASSERT_EQUAL(expectedResponse, httpFrameworkResponse.getResponse());
}
