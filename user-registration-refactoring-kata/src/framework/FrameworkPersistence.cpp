#include <exception>

#include "FrameworkPersistence.h"
#include "DatabaseException.h"

FrameworkPersistence::FrameworkPersistence() {
}

void FrameworkPersistence::saveUser(User user) {
    users.insert(std::make_pair(user.getEmail(), user));
}

User FrameworkPersistence::findByEmail(string email) {
    auto search = users.find(email);

    if (search != users.end()) {
        return search->second;
    } else {
        throw DatabaseException();
    }
}