#ifndef USERREGISTRATIONCONTROLLERTEST_H
#define USERREGISTRATIONCONTROLLERTEST_H

#include "../src/framework/UserRegistrationController.h"

#include <cppunit/extensions/HelperMacros.h>

class UserRegistrationControllerTest : public CppUnit::TestFixture {
    CPPUNIT_TEST_SUITE( UserRegistrationControllerTest );

    CPPUNIT_TEST( should_success_when_everything_is_valid );
    CPPUNIT_TEST( should_return_the_new_registered_user_id_when_everything_is_valid );
    CPPUNIT_TEST( should_fail_when_password_is_short );

    CPPUNIT_TEST_SUITE_END();

protected:
    UserRegistrationController frameworkController;

public:
    void setUp();

    void tearDown();

    void should_success_when_everything_is_valid();

    void should_return_the_new_registered_user_id_when_everything_is_valid();

    void should_fail_when_password_is_short();

private:
    HttpFrameworkRequest createValidRequest();
};

#endif