#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;

    do {
        cout << "Entrez un nombre entier positif : ";
        cin >> n;
        if (n < 0)
            cout << "Valeur negative refusee, reessayez." << endl;
    } while (n < 0);

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << n << "! = " << fact << endl;

    return 0;
}