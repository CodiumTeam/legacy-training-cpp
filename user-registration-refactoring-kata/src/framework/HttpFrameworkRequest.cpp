#include "HttpFrameworkRequest.h"


HttpFrameworkRequest::HttpFrameworkRequest() {
    parameters["password"] = "aValidPassword";
}

string HttpFrameworkRequest::getParameter(string name) {
    return parameters[name];
}

void HttpFrameworkRequest::setParameter(string name, string value) {
    parameters[name] = value;
}
