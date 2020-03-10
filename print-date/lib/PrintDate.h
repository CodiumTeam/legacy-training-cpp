#ifndef LEGACY_TRAINING_CPP_PRINTDATE_H
#define LEGACY_TRAINING_CPP_PRINTDATE_H

#include "Calendar.h"
#include "Printer.h"

#include <ctime>
#include <iostream>

using namespace std;

class PrintDate {
public:
    PrintDate(Calendar *calendar, Printer *printer) {
        this->calendar = calendar;
        this->printer = printer;
    }

    void printCurrentDate(){
        time_t now = this->calendar->today();
        char *timeNow = ctime(&now);
        this->printer->printLine(timeNow);
    }

private:
    Calendar *calendar;
    Printer *printer;
};

#endif //LEGACY_TRAINING_CPP_PRINTDATE_H