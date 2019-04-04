#ifndef LEGACY_TRAINING_CPP_USERREGISTRATIONCONTROLLER_H
#define LEGACY_TRAINING_CPP_USERREGISTRATIONCONTROLLER_H

#include "DatabasePersistence.h"
#include "HttpFrameworkRequest.h"
#include "HttpFrameworkResponse.h"

class UserRegistrationController {
private:
    DatabasePersistence persistence;

public:
    UserRegistrationController();

    HttpFrameworkResponse registerUser(HttpFrameworkRequest request);
};

#endif
