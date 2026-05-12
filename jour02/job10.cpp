#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;

    do {
        cout << "Entrez un nombre positif (0 pour quitter) : ";
        cin >> a;

        if (a < 0)
            cout << "Valeur negative, reessayez." << endl;
        else if (a != 0)
            cout << "Racine carree : " << sqrt(a) << endl;

    } while (a != 0);

    cout << "Au revoir." << endl;

    return 0;
}