#include <iostream>
#include <string>
#include "../include/LoginManager.h"
#include <limits>
#include <stdexcept>



int main()
{
    LoginManager lM;
    char option;
    do {
        system("cls");
        std::cout << "#########################" << std::endl;
        std::cout << "#   Login System   #" <<std::endl;
        std::cout << "#########################" << '\n' << std::endl;
        std::cout << "1. Register" << std::endl;
        std::cout << "2. Login" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cin >> option;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        switch(option)
        {
            case '1':{lM.registerUser(); break;}
            case '2':{lM.login(); break;}
            case '4':{ return 0;}
            default:{
                std::cout << "Invalid input" << std::endl;
                system("pause");
            }
        }
        }while(option !='4');
}

