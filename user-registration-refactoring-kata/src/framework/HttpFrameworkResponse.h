#ifndef LEGACY_TRAINING_CPP_HTTPFRAMEWORKRESPONSE_H
#define LEGACY_TRAINING_CPP_HTTPFRAMEWORKRESPONSE_H

#include <string>

using namespace std;

class HttpFrameworkResponse {
private:
    string response;
    int httpStatus;

public:
    HttpFrameworkResponse(string v_response, int v_httpStatus);

    string getResponse();

    int getHttpStatus();
};


#endif