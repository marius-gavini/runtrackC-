#include <iostream>
int main(){
    int a;

    std::cout << "Enter a number : " << std::endl;
    std::cin >> a;
    if (a % 2 == 0){
        std::cout << "Your number " << a << " is even" << std::endl;
    }     
    else{
        std::cout << "Your number " << a << " is odd" << std::endl;
    }
}