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

    appendFileToWorkWith << "<!doctype html>" << endl;
    appendFileToWorkWith << "<html lang=\"en\">" << endl;

    appendFileToWorkWith << "<head>" << endl;
    appendFileToWorkWith << "<meta charset=\"utf-8\">" << endl;
    appendFileToWorkWith << "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1, shrink-to-fit=no\">" << endl;
    appendFileToWorkWith << "<title>User biographies</title>" << endl;
    appendFileToWorkWith << "<!-- Bootstrap core CSS -->" << endl;
    appendFileToWorkWith << "<link rel=\"stylesheet\" href=\"https://stackpath.bootstrapcdn.com/bootstrap/4.1.0/css/bootstrap.min.css\" integrity=\"sha384-9gVQ4dYFwwWSjIDZnLEWnxCjeSWFphJiwGPXr1jddIhOegiu1FwO5qRGvFXOdJZ4\" crossorigin=\"anonymous\">" << endl;
    appendFileToWorkWith << "<!-- Custom styles for this template -->" << endl;
    appendFileToWorkWith << "<link href=\"assets/cover.css\" rel=\"stylesheet\">" << endl;
    appendFileToWorkWith << "</head>" << endl;

    appendFileToWorkWith << "<body class=\"text-center\">" << endl;
    appendFileToWorkWith << "<div class=\"cover-container d-flex w-100 h-100 p-3 mx-auto flex-column\">" << endl;
    appendFileToWorkWith << "<header class=\"masthead mb-auto\">" << endl;
    appendFileToWorkWith << "<div class=\"inner\">" << endl;
    appendFileToWorkWith << "<h3 class=\"masthead-brand\">Users Biography</h3>" << endl;
    appendFileToWorkWith << "<nav class=\"nav nav-masthead justify-content-center\">" << endl;
    appendFileToWorkWith << "<a class=\"nav-link active\" href=\"#\">Home</a>" << endl;
    appendFileToWorkWith << "<a class=\"nav-link\" href=\"#\">Features</a>" << endl;
    appendFileToWorkWith << "<a class=\"nav-link\" href=\"#\">Contact</a>" << endl;
    appendFileToWorkWith << "</nav>" << endl;
    appendFileToWorkWith << "</div>" << endl;
    appendFileToWorkWith << "</header>" << endl;

    appendFileToWorkWith << "<main role=\"main\" class=\"inner cover\">" << endl;
    for (it = users.begin(); it != users.end(); it++) {
        appendFileToWorkWith << it->name << endl;
    }
    appendFileToWorkWith << "</main>" << endl;

    appendFileToWorkWith << "<footer class=\"mastfoot mt-auto\">" << endl;
    appendFileToWorkWith << "<div class=\"inner\">" << endl;
    appendFileToWorkWith << "<p>Web page generator kata created by Codium <a href=\"https://twitter.com/CodiumTeam\">@CodiumTeam</a>. Cover template for <a href=\"https://getbootstrap.com/\">Bootstrap</a>, by <a href=\"https://twitter.com/mdo\">@mdo</a>.</p>" << endl;
    appendFileToWorkWith << "</div>" << endl;
    appendFileToWorkWith << "</footer>" << endl;
    appendFileToWorkWith << "</div>" << endl;

    appendFileToWorkWith << "<!-- Bootstrap core JavaScript" << endl;
    appendFileToWorkWith << "        ================================================== -->" << endl;
    appendFileToWorkWith << "<!-- Placed at the end of the document so the pages load faster -->" << endl;
    appendFileToWorkWith << "<script src=\"https://code.jquery.com/jquery-3.3.1.slim.min.js\" integrity=\"sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo\" crossorigin=\"anonymous\"></script>" << endl;
    appendFileToWorkWith << "<script src=\"https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.0/umd/popper.min.js\" integrity=\"sha384-cs/chFZiN24E4KMATLdqdvsezGxaGsi4hLGOzlXwp5UZB1LY//20VyM2taTB4QvJ\" crossorigin=\"anonymous\"></script>" << endl;
    appendFileToWorkWith << "<script src=\"https://stackpath.bootstrapcdn.com/bootstrap/4.1.0/js/bootstrap.min.js\" integrity=\"sha384-uefMccjFJAIv6A+rW+L4AHf99KvxDjWSu1z9VI8SKNVmz4sk7buKt/6v9KI65qnm\" crossorigin=\"anonymous\"></script>" << endl;

    appendFileToWorkWith << "</body>" << endl;
    appendFileToWorkWith << "</html>" << endl;

    appendFileToWorkWith.close();
}