#ifndef USERREGISTRATIONCONTROLLERTEST_H
#define USERREGISTRATIONCONTROLLERTEST_H

#include <cppunit/extensions/HelperMacros.h>

class UserRegistrationControllerTest : public CppUnit::TestFixture {
    CPPUNIT_TEST_SUITE( UserRegistrationControllerTest );
    CPPUNIT_TEST( testXXX );

    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();

    void tearDown();

    void testXXX();
};

#endif