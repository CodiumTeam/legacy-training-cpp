#ifndef LEGACY_TRAINING_CPP_USERSTATICWEBPAGEGENERATOR_H
#define LEGACY_TRAINING_CPP_USERSTATICWEBPAGEGENERATOR_H

#include <list>

#include "User.h"


class UserStaticWebPageGenerator {
public:
    UserStaticWebPageGenerator();
    void generateFile(std::list<User> users);
};


#endif
