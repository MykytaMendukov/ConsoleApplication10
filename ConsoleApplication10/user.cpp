#include "user.h"

User::User() {

    login = nullptr;
    password = nullptr;
    email = nullptr;
    phone = nullptr;

}

User::User(string* login) : User()
{
    setLogin(login);
}

User::User(string* login, string* password) : User(login)
{
    setPassword(password);
}

User::User(string* login, string* password, string* email) : User(login, password)
{
    setEmail(email);
}

User::User(string* login, string* password, string* email, string* phone) : User(login, password, email)
{
    setPhone(phone);
}

void User::setLogin(string* login)
{
    this->login = Validation::validateLogin(login);
}
void User::setPassword(string* password)
{
    this->password = Validation::validationPassword(password);
}
void User::setEmail(string* email)
{
    this->email = Validation::validationEmail(email);
}
void User::setPhone(string* phone)
{
    this->phone = Validation::validationPhone(phone);
}

