#include <iostream>
#include <fstream>
#include "UserStaticWebPageGenerator.h"
#include "User.h"

UserStaticWebPageGenerator::UserStaticWebPageGenerator() {

}

void UserStaticWebPageGenerator::generateFile(User users[]){
    char filename[ ] = "./html/users.html";
    fstream appendFileToWorkWith;


    appendFileToWorkWith.open(filename, std::fstream::out);

    appendFileToWorkWith << "<html></html>";

    appendFileToWorkWith.close();

}