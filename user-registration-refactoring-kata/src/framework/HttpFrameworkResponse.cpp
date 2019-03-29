#include <string>

#include "HttpFrameworkResponse.h"

using namespace std;

HttpFrameworkResponse::HttpFrameworkResponse(string v_response, int v_httpStatus) {
    response = v_response;
    httpStatus = v_httpStatus;
}

string HttpFrameworkResponse::getResponse() {
    return response;
}

int HttpFrameworkResponse::getHttpStatus() {
    return httpStatus;
}