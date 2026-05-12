#include <iostream>

using namespace std;

int main() {
    int i, n, som;
    som = 0;
    i = 0;

    //Boucle While 
    while (i < 4) {
        cout << "donnez un entier";
        cin >> n;
        som += n;
        i++;
    }
    cout << "Somme : " << som;

    //Boucle do/While
    do {
        cout << "donnez un entier";
        cin >> n;
        som += n;
        i++;
    } while (i<4);
    cout << "Somme : " << som;
}