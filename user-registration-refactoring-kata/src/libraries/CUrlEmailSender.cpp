#include <time.h>
#include <string>
#include <curl/curl.h>

#include "CUrlEmailSender.h"

std::string dateTimeNow();

std::string generateMessageId();

std::string setPayloadText(const std::string &to,
                           const std::string &from,
                           const std::string &cc,
                           const std::string &nameFrom,
                           const std::string &subject,
                           const std::string &body) {
    std::string ret;

    ret += "Date: " + dateTimeNow() + ">\r\n";
    ret += "To: <" + to + ">\r\n";
    ret += "From: <" + from + "> (" + nameFrom + ")\r\n";
    ret += "Cc: <" + cc + "> (" + nameFrom + ")\r\n";
    ret += "Message-ID: <" + generateMessageId() + "@" + from.substr(from.find('@') + 1) + ">\r\n";
    ret += "Subject: " + subject + "\r\n";
    ret += "\r\n";
    ret += body + "\r\n";
    ret += "\r\n";
    ret += "\r\n"; // "It could be a lot of lines, could be MIME encoded, whatever.\r\n";
    ret += "\r\n"; // "Check RFC5322.\r\n";

    return ret;
}

std::string dateTimeNow() {
//    static const char *DAY_NAMES[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
//    static const char *MONTH_NAMES[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov",
//                                        "Dec"};
//
//    const int RFC1123_TIME_LEN = 29;
//    time_t t;
//    struct tm tm;
//
//    std::string ret;
//    ret.resize(RFC1123_TIME_LEN);
//
//    time(&t);
//    gmtime_s(&tm, &t);
//
//    strftime(&ret[0], RFC1123_TIME_LEN + 1, "---, %d --- %Y %H:%M:%S GMT", &tm);
//    memcpy(&ret[0], DAY_NAMES[tm.tm_wday], 3);
//    memcpy(&ret[8], MONTH_NAMES[tm.tm_mon], 3);

//    return ret;
    return "TODAY";
}

std::string generateMessageId() {
//    const int MESSAGE_ID_LEN = 37;
//    time_t t;
//    struct tm tm;
//
//    std::string ret;
//    ret.resize(15);
//
//    time(&t);
//    gmtime_s(&tm, &t);
//
//    strftime(const_cast<char *>(ret.c_str()),
//             MESSAGE_ID_LEN,
//             "%Y%m%d%H%M%S.",
//             &tm);
//
//    ret.reserve(MESSAGE_ID_LEN);
//
//    static const char alphanum[] =
//            "0123456789"
//            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
//            "abcdefghijklmnopqrstuvwxyz";
//
//    while (ret.size() < MESSAGE_ID_LEN) {
//        ret += alphanum[rand() % (sizeof(alphanum) - 1)];
//    }
//
//    return ret;
    return "12345";
}

struct uploadStatus {
    int linesRead;
};

struct StringData {
    std::string msg;
    size_t bytesleft;

    StringData(std::string &&m) : msg{m}, bytesleft{msg.size()} {}

    StringData(std::string &m) = delete;
};

size_t payloadSource(void *ptr, size_t size, size_t nmemb, void *userp) {
    StringData *text = reinterpret_cast<StringData *>(userp);

    if ((size == 0) || (nmemb == 0) || ((size * nmemb) < 1) || (text->bytesleft == 0)) {
        return 0;
    }

    if ((nmemb * size) >= text->msg.size()) {
        text->bytesleft = 0;
        return text->msg.copy(reinterpret_cast<char *>(ptr), text->msg.size());
    }

    return 0;
}

CUrlEmailSender::CUrlEmailSender() {
}

CURLcode CUrlEmailSender::sendEmail(
        const std::string &to,
        const std::string &from,
        const std::string &cc,
        const std::string &nameFrom,
        const std::string &subject,
        const std::string &body,
        const std::string &url,
        const std::string &password) {

    CURLcode ret = CURLE_OK;

    struct curl_slist *recipients = NULL;

    CURL *curl = curl_easy_init();

    StringData textData{setPayloadText(to, from, cc, nameFrom, subject, body)};

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_USERNAME, from.c_str());
        curl_easy_setopt(curl, CURLOPT_PASSWORD, password.c_str());
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());

        curl_easy_setopt(curl, CURLOPT_USE_SSL, (long) CURLUSESSL_ALL);
        //curl_easy_setopt(curl, CURLOPT_CAINFO, "/path/to/certificate.pem");

        curl_easy_setopt(curl, CURLOPT_MAIL_FROM, ("<" + from + ">").c_str());
        recipients = curl_slist_append(recipients, ("<" + to + ">").c_str());
        recipients = curl_slist_append(recipients, ("<" + cc + ">").c_str());

        curl_easy_setopt(curl, CURLOPT_MAIL_RCPT, recipients);
        curl_easy_setopt(curl, CURLOPT_READFUNCTION, payloadSource);
        curl_easy_setopt(curl, CURLOPT_READDATA, &textData);
        curl_easy_setopt(curl, CURLOPT_UPLOAD, 1L);
        curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);

        ret = curl_easy_perform(curl);

        if (ret != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(ret));
        }

        curl_slist_free_all(recipients);
        curl_easy_cleanup(curl);
    }

    return ret;
}