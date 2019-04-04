#include <exception>

#include "DatabasePersistence.h"
#include "DatabaseException.h"

DatabasePersistence::DatabasePersistence() {
}

void DatabasePersistence::saveUser(User user) {
    users.insert(std::make_pair(user.getEmail(), user));
}

User DatabasePersistence::findByEmail(string email) {
    auto search = users.find(email);

    if (search != users.end()) {
        return search->second;
    } else {
        throw DatabaseException();
    }
}