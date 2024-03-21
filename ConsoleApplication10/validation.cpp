#include "validation.h"

inline void ltrim(std::string& s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !std::isspace(ch);
        }));
}
inline void rtrim(std::string& s) {
    s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
        }).base(), s.end());
}
inline std::string ltrim_copy(std::string s) {
    ltrim(s);
    return s;
}
inline std::string rtrim_copy(std::string s) {
    rtrim(s);
    return s;
}
inline void trim(std::string& s) {
    rtrim(s);
    ltrim(s);
}
inline std::string trim_copy(std::string s) {
    trim(s);
    return s;
}


string* Validation::validateLogin(string* login)
{
    if (login == nullptr) {
        cout << AppError::text_for_login_is_null << endl;
    }
    else {
        trim(*login);
        if (login->size() < 3 && login->empty() != true) {
            cout << AppError::text_for_login << endl;
        }
        else if (login->empty()) {
            cout << AppError::text_for_login_empty << endl;
        }
        else {
            return login;
        }
    }
}
string* Validation::validationPassword(string* password)
{
    if (password == nullptr) {
        cout << AppError::text_for_password_is_null << endl;
    }
    else {
        trim(*password);
        if (password->size() < 8 && password->empty() != true) {
            cout << AppError::text_for_password << endl;
        }
        else if (password->empty()) {
            cout << AppError::text_for_password_empty << endl;
        }
        else {
            return password;
        }
    }
}
string* Validation::validationEmail(string* email)
{
    if (email == nullptr) {
        cout << AppError::text_for_email_is_null << endl;
    }
    else {
        trim(*email);
        if (email->size() < 5 && email->empty() != true) {
            cout << AppError::text_for_email << endl;
        }
        else if (email->empty()) {
            cout << AppError::text_for_email_empty << endl;
        }
        else if (email->find("@") == -1) {
            cout << AppError::text_for_email_at << endl;
        }
        else {
            return email;
        }
    }
}
string* Validation::validationPhone(string* phone)
{
    if (phone == nullptr) {
        cout << AppError::text_for_phone_is_null << endl;
    }
    else {
        trim(*phone);
        if (phone->size() != 9 && phone->empty() != true) {
            cout << AppError::text_for_phone << endl;
        }
        else if (phone->empty()) {
            cout << AppError::text_for_phone_empty << endl;
        }
        else if (phone->find("+") == -1) {
            cout << AppError::text_for_phone_plus << endl;
        }
        else {
            return phone;
        }
    }
}
