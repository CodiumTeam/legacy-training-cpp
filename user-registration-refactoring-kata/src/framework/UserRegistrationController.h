#ifndef LEGACY_TRAINING_CPP_USERREGISTRATIONCONTROLLER_H
#define LEGACY_TRAINING_CPP_USERREGISTRATIONCONTROLLER_H

#include "FrameworkPersistence.h"
#include "HttpFrameworkRequest.h"
#include "HttpFrameworkResponse.h"

class UserRegistrationController {
private:
    FrameworkPersistence persistence;

public:
    UserRegistrationController();

    HttpFrameworkResponse registerUser(HttpFrameworkRequest request);
};

#endif
