#include <iostream>
int main(){
    int a;

    std::cout << "Enter a number : " << std::endl;
    std::cin >> a;
    std::cout << "Your multiplication table for " << a << std::endl;
    for (int i = 1; i <= 10; i++){
        std::cout << a << " * " << i << " = " << a * i << std::endl;
    }
    
}