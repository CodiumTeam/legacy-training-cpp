#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "lib/Calendar.h"
#include "lib/Printer.h"
#include <lib/PrintDate.h>

using ::testing::Return;
using ::testing::_; // Matcher for parameters


TEST(PrintDateTest, PrintCurrentDate) {
    // see https://github.com/google/googletest/blob/master/googlemock/docs/ForDummies.md

    //PrintDate printDate(calendar, printer);

    //printDate.printCurrentDate();
}

int main(int argc, char **argv) {
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}
