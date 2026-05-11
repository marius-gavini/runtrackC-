#include <iostream>

int main(void) {
    int n, reversed = 0;

    std::cout << "Enter a number : ";
    std::cin >> n;

    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    std::cout << "Reversed : " << reversed << std::endl;
}