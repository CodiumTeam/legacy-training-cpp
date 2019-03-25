#include "User.h"
#include "UserStaticWebPageGenerator.h"

using namespace std;

int main( int, char* [] )
{
    User user1 ("Luis", "Coach en Codium");
    User user2 ("Luis", "Coach en Codium");
    User user3 ("Luis", "Coach en Codium");

    User users[3] = {user1, user2, user3};

    UserStaticWebPageGenerator generator;
    generator.generateFile(users);

    return 0;
}