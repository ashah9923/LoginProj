#include "../include/LoginManager.h"
#include <iostream>
#include <limits>
#include <stdexcept>


LoginManager::LoginManager()
{
    admin.setUserName("Admin");
    admin.setUserPass("Admin");
    admin.setSecretMessage("I see all");
    admin.setIsAdmin(true);
    userList.push_back(admin);
}

void LoginManager::registerUser()
{
    User newUser;
    std::string userNameInput, userPassInput, secretPassInput;
    std::cout << "Please enter your username: " << '\n';
    std::getline(std::cin, userNameInput);
    newUser.setUserName(userNameInput);
    std::cout << "Please enter your password: " << '\n';
    std::getline(std::cin, userPassInput);
    newUser.setUserPass(userPassInput);
    std::cout << "Please enter your secret password: " << '\n';
    std::getline(std::cin, secretPassInput);
    newUser.setSecretMessage(secretPassInput);
    userList.push_back(newUser);
}


void LoginManager::login()
{
    bool login = true;
    while(login)
    {
        std::string userNameInput, userPassInput;
        std::cout << "Please enter your login details: " << '\n';
        std::cout << "UserName: ";
        std::getline(std::cin, userNameInput);
        std::cout << "UserPass: ";
        std::getline(std::cin, userPassInput);
        //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        auto sameUserName = [&](User user) { return userNameInput == user.getUserName();};      // returns true if userName matches input
        auto sameUserPass = [&](User user) { return userPassInput == user.getUserPass();};

        auto userNameIt = std::find_if(userList.begin(), userList.end(), sameUserName);     // goes through userList and returns iterator
        auto userPassIt = std::find_if(userList.begin(), userList.end(), sameUserPass);     

        if (userNameIt == userPassIt && userNameIt != userList.end())
        {
            std::cout << (*userNameIt).getSecretMessage() << std::endl;
            system("pause");
            if ((*userNameIt).getAdmin())
            {
                char option;
                do {
                    system("cls");
                    std::cout << "1. view users" << std::endl;
                    std::cout << "2. deleteUser" << std::endl;
                    std::cout << "3. Exit" << std::endl;
                    std::cin >> option;
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    switch(option)
                    {
                        case '1':{showUsers(); system("pause"); break;}
                        case '2':{deleteUsers();system("pause"); break;}
                        case '3':{return;}
                        default:{
                            std::cout << "Invalid input" << std::endl;
                            system("pause");
                        }
                    }
                    }while(option !='4');
            }
            login = false;
        }
        else
        {
            std::cout << " Incorrect, try again ";
        }
    }
}


void LoginManager::showUsers()
{
    for (auto user : userList)
    {
        std::cout << user.getUserName() << '\n';
    }
}

void LoginManager::deleteUsers()
{   
    while(true)
    {
        std::string userNameInput;
        std::cout << "Enter UserName of user to delete: " << '\n';
        std::cout << "UserName: ";
        std::getline(std::cin, userNameInput);

        auto sameUserName = [&](User user) { return userNameInput == user.getUserName();};
        auto userNameIt = std::find_if(userList.begin(), userList.end(), sameUserName); 
        
        if (userNameIt != userList.end())
        {
            userList.erase(userNameIt);
            break;
        }
        std::cout << "No such username found.. try again" << std::endl;
    }
}