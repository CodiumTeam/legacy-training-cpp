#include <list>

#include "User.h"
#include "UserStaticWebPageGenerator.h"

using namespace std;

int main( int, char* [] )
{
    User user1 ("Luis", "Coach en Codium");
    User user2 ("Jordi", "Coach en Codium");
    User user3 ("Miguel", "Coach en Codium");

    std::list<User> users = {user1, user2, user3};

    UserStaticWebPageGenerator generator;
    generator.generateFile(users);

    return 0;
}