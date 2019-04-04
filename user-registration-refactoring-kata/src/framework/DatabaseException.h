#ifndef PROJECT_DATABASEEXCEPTION_H
#define PROJECT_DATABASEEXCEPTION_H

struct DatabaseException : public std::exception
{
    const char * what () const throw ()
    {
        return "Database exception";
    }
};

#endif //PROJECT_DATABASEEXCEPTION_H
