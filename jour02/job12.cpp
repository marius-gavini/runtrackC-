#include <iostream>
using namespace std;

int main() {
    int a, i;
    double res = 1;

    do {
        cout << "Entrez un nombre entier positif : ";
        cin >> a;

        if (a < 0)
            cout << "Valeur negative, reessayez." << endl;
    } while (a < 0);
    
    for(i = 2; i <= a; i++) {
        res += 1.0/i;
    } 
    cout << "Serie harmonique egale : " << res << endl;
    cout << "Au revoir." << endl;

    return 0;
}