#ifndef LEGACY_TRAINING_CPP_CALENDAR_H
#define LEGACY_TRAINING_CPP_CALENDAR_H

#include <ctime>

class Calendar {
public:
    virtual time_t today() const = 0;
};


#endif //LEGACY_TRAINING_CPP_CALENDAR_H