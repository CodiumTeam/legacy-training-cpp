#include <iostream>
#include <fstream>
#include <list>

#include "UserStaticWebPageGenerator.h"
#include "User.h"

using namespace std;

UserStaticWebPageGenerator::UserStaticWebPageGenerator() {

}

void UserStaticWebPageGenerator::generateFile(std::list<User> users) {
    char filename[] = "./html/users.html";
    fstream appendFileToWorkWith;

    appendFileToWorkWith.open(filename, fstream::out);

    list<User>::iterator it;

    appendFileToWorkWith << "<html>" << endl;

    for (it = users.begin(); it != users.end(); it++) {
        appendFileToWorkWith << it->name << endl;
    }
    appendFileToWorkWith << "</html>" << endl;

    appendFileToWorkWith.close();

}