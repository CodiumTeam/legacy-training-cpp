#ifndef LEGACY_TRAINING_CPP_HTTPFRAMEWORKREQUEST_H
#define LEGACY_TRAINING_CPP_HTTPFRAMEWORKREQUEST_H

#include <string>
#include <unordered_map>

using namespace std;


class HttpFrameworkRequest {
private:
    unordered_map<string, string> parameters;

public:
    HttpFrameworkRequest();

    string getParameter(string name);

    void setParameter(string name, string value);
};

#endif
