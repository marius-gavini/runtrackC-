#include <iostream>

int main(void){
    int a;

    std::cout << "Enter a year : " << std::endl;
    std::cin >> a;
    if ((a % 4 == 0 && a % 100) || a % 400 == 0){
        std::cout << "Year " << a << " is a leap year" << std::endl;
    }     
    else{
        std::cout << "Year " << a << " is not a leap year" << std::endl;
    }
}