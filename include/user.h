#ifndef USER_H
#define USER_H
#include <string>

class User
{
    protected:
    bool isAdmin = false;
    std::string userName;
    std::string userPass;
    std::string secretMessage;
    public:
    void setUserName(const std::string&usrNme){ userName = usrNme;};
    void setUserPass(const std::string&usrps){ userPass = usrps;};
    void setSecretMessage(const std::string&scrtMess){ secretMessage = scrtMess;};
    void setIsAdmin(bool admin){ isAdmin = admin;}

    std::string getUserName(){ return userName;};
    std::string getUserPass(){ return userPass;};
    std::string getSecretMessage() { return secretMessage;};
    bool getAdmin(){ return isAdmin;};
};

#endif