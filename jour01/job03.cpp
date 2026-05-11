#include <iostream>
int main(void){
    int num;
    std::cout << "Type a number: " << std::endl;
    std::cin >> num;
    std::cout << "You entered " << num;
    if (num > 0) {
        for (int i = 0; i < num+1; i++) {
            std::cout << "Hello World" << std::endl;
        }
    }
}