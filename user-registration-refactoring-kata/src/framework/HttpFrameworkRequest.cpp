#include <iostream>

#include "HttpFrameworkRequest.h"

using namespace std;


HttpFrameworkRequest::HttpFrameworkRequest() {

}

string HttpFrameworkRequest::getParameter(string v_name) {
    cout << "HttpFrameworkRequest.getParameter:" << endl;
    return "static_value";
}
