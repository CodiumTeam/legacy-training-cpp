#include "UserRegistrationControllerTest.h"

#include "../src/framework/FrameworkPersistence.h"
#include "../src/framework/HttpFrameworkResponse.h"
#include "../src/framework/HttpFrameworkRequest.h"
#include "../src/framework/UserRegistrationController.h"

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( UserRegistrationControllerTest );


void
UserRegistrationControllerTest::setUp() {
}


void
UserRegistrationControllerTest::tearDown() {
}


void
UserRegistrationControllerTest::should_success_when_everything_is_valid() {
    HttpFrameworkRequest httpFrameworkRequest;
    httpFrameworkRequest.setParameter("name", "aName");
    httpFrameworkRequest.setParameter("email", "my_email@my_company.com");
    httpFrameworkRequest.setParameter("password", "aValidPassword_");

    UserRegistrationController frameworkController;
    HttpFrameworkResponse httpFrameworkResponse = frameworkController.registerUser(httpFrameworkRequest);

    CPPUNIT_ASSERT_EQUAL( 200, httpFrameworkResponse.getHttpStatus() );
}
