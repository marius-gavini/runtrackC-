#include <iostream>

int main(void) {
    int input;
    float sum = 0;

    for (int i = 0; i < 5; i++) {
        std::cout << "Enter a number : " << std::endl;
        std::cin >> input;
        sum += input;
    }

    std::cout << "Average : " << sum / 5 << std::endl;
}