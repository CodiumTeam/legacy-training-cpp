#ifndef LEGACY_TRAINING_CPP_USERREGISTRATIONCONTROLLER_H
#define LEGACY_TRAINING_CPP_USERREGISTRATIONCONTROLLER_H


class UserRegistrationController {
public:
    UserRegistrationController();
    HttpFrameworkResponse registerUser(HttpFrameworkRequest request);
};

#endif
