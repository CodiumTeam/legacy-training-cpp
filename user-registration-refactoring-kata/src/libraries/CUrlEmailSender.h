#ifndef LEGACY_TRAINING_CPP_CURLEMAILSENDER_H
#define LEGACY_TRAINING_CPP_CURLEMAILSENDER_H

#include <string>
#include <curl/curl.h>

class CUrlEmailSender {
public:
    CUrlEmailSender();

    CURLcode sendEmail(const std::string &to,
                       const std::string &from,
                       const std::string &cc,
                       const std::string &nameFrom,
                       const std::string &subject,
                       const std::string &body,
                       const std::string &url,
                       const std::string &password);
};

#endif
