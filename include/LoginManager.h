#ifndef LOGINMANAGER_H
#define LOGINMANAGER_H
#include <string>
#include <list>
#include "admin.h"
#include "user.h"

class LoginManager
{
    private:
    User admin;
    std::list<User> userList;
    public:
    LoginManager();
    void registerUser();    //add user
    void login();
    void adminLogin();
    void showUsers();
    void deleteUser();
    void deleteUsers();
};

#endif