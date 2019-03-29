#ifndef LEGACY_TRAINING_CPP_USERREGISTRATIONCONTROLLER_H
#define LEGACY_TRAINING_CPP_USERREGISTRATIONCONTROLLER_H

class UserRegistrationController {
private:
    FrameworkPersistence persistence;

public:
    UserRegistrationController();

    HttpFrameworkResponse registerUser(HttpFrameworkRequest request);
};

#endif
