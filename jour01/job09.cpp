#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
int main(){
    std::vector<int> num;
    int a;
    int b;
    int c;

    std::cout << "Enter the first number : ";
    std::cin >> a;
    num.push_back(a);

    std::cout << "Enter the second number : ";
    std::cin >> b;
    num.push_back(b);

    std::cout << "Enter the second number : ";
    std::cin >> c;
    num.push_back(c);
    
    std::cout <<  "Higher number is " << *std::max_element(num.begin(),num.end()) << std::endl;

    // OR

    std::sort(num.begin(), num.end());
    std::cout << "Higher number is " << num.back() << std::endl;

    // OR

    std::sort(num.begin(), num.end(), std::greater<int>());
    std::cout << "Higher number is " << num[0] << std::endl;
}