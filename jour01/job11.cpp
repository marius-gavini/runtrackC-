#include <iostream>

int main(void) {
    int n, m;

    std::cout << "Enter n : ";
    std::cin >> n;
    std::cout << "Enter m : ";
    std::cin >> m;

    std::cout << "Before swap : n = " << n << ", m = " << m << std::endl;

    int temp = n;
    n = m;
    m = temp;

    std::cout << "After swap  : n = " << n << ", m = " << m << std::endl;

    //OR 
    std::swap(n,m);
    std::cout << "Using std::swap  : n = " << n << ", m = " << m << std::endl;
}