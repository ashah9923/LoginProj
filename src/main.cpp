#include <iostream>
#include <string>
#include "../include/LoginManager.h"
#include <limits>
#include <stdexcept>

// int main()
// {
//     system("cls");
//     LoginManager lM;
//     lM.registerUser();
//     lM.login();
//     return 0;
// }




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






// int main()
// {
//     int usersPin, pin, errorCounter = 0;
//     const int MAX_ERRORS = 3;
//     std::cout << "uhh.. where.. am I? ";
//     std::cout << "Set your Pin: ";
//     std::cin >> usersPin;
//     do
//     {
//         std::cout << "Please Enter Your PIN: ";
//         std::cin >> pin;
//         errorCounter += 1;
//         int T = MAX_ERRORS - errorCounter;
//         std::cout << "You have " << T << " tries remaining" << "\n";
//     } while (errorCounter < MAX_ERRORS && pin != usersPin);
    
    
    
    
//     if(pin == usersPin){
//         printf("hello there!");
//         std::cout << "Welcome to the system" << "\n";
//         int n;
//         char c;
//         std::cout << " Press B to show balance" <<"\n Press D to deposit" <<"\n Press W to withdraw" <<"\n";
//         std::cin >> c;
//         switch(c)
//     {
//         case 'B':{
//             std::cout << "You're Broke" <<std::endl;
//         }
//         break;
//         case 'D':{
//             std::cout << "How much cash would you like to deposit" <<std::endl;
//             std::cin >> n;
//             std::cout << n << " pounds was deposited to your acc";
//         }
//         break;
//         case 'W':{
//             std::cout << "How much cash would you like to withdraw" <<std::endl;
//             std::cin >> n;
//             std::cout << n << " pounds was withdrawn from your acc";
//         }
//     default:{
//         std::cout << "Invalid input" <<std::endl;
//     }
//     }
//     }
//     else{
//         std::cout << "Your account has been blocked";
//     }
    
    
    
//     return 0;
// }
