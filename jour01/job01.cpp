#include <iostream>

char c = '\x01'; // c est de type character et sa valeur est 1 mais ne s'affiche pas
short int p = 10; // p est un integer court et sa valeur est 10
int main(void){
    std::cout << c << std::endl;
    std::cout << p << std::endl;
    return 0;
}
