#include <iostream>

int main(void) {
    int n;
    long long sum = 0;

    std::cout << "Enter N (must be >=5) : ";
    std::cin >> n;

    if (n < 5) {
        std::cout << "N must be >= 5" << std::endl;
        return 1;
    }

    for (int i = 5; i <= n; i++) {
        sum += i * i * i;
    }

    std::cout << "Sum of cubes from 5^3 to " << n << "^3 = " << sum << std::endl;
}