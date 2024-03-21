#ifndef validation_h
#define validation_h

#include "error.h"

class Validation
{
public:
    static string* validateLogin(string* login);
    static string* validationPassword(string* password);
    static string* validationEmail(string* email);
    static string* validationPhone(string* phone);
};

#endif