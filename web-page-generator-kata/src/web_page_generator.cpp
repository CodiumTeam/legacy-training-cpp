#include <iostream>
#include <fstream>

using namespace std;

int main( int, char* [] )
{
    char filename[ ] = "./html/users.html";
    fstream appendFileToWorkWith;

    appendFileToWorkWith.open(filename, std::fstream::out);

    appendFileToWorkWith << "<html></html>";
    appendFileToWorkWith.close();
    return 0;
}