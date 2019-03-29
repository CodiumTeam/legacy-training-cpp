#include "FrameworkPersistence.h"

FrameworkPersistence::FrameworkPersistence() {
}

void FrameworkPersistence::saveUser(User user) {
    users.insert(std::make_pair(user.getEmail(), user));
}
