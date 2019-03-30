#ifndef USERREGISTRATIONCONTROLLERTEST_H
#define USERREGISTRATIONCONTROLLERTEST_H

#include "../src/framework/UserRegistrationController.h"

#include <cppunit/extensions/HelperMacros.h>

class UserRegistrationControllerTest : public CppUnit::TestFixture {
    CPPUNIT_TEST_SUITE( UserRegistrationControllerTest );
    CPPUNIT_TEST( should_success_when_everything_is_valid );

    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();

    void tearDown();

    void should_success_when_everything_is_valid();
};

#endif