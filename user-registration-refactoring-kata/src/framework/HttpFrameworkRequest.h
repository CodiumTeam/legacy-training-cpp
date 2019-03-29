#ifndef LEGACY_TRAINING_CPP_HTTPFRAMEWORKREQUEST_H
#define LEGACY_TRAINING_CPP_HTTPFRAMEWORKREQUEST_H

#include <string>

using namespace std;


class HttpFrameworkRequest {
public:
    HttpFrameworkRequest();

    string getParameter(string v_name);
};

#endif
