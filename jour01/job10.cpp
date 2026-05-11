#include <iostream>

int main(void){
    int a;

    std::cout << "Enter excluding tax price : " << std::endl;
    std::cin >> a;
    
    std::cout << "Price including taxes is  " << a* 1.15 << std::endl;
}