#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Entrez un nombre entier N : ";
    cin >> n;
    for (int i = 0; i <= n; i++) {
        if (i % 3 == 0 && i != 0) {
            cout << i << " est un multiple de 3." << endl;
        } else if (i % 5 == 0 && i != 0) {
            cout << i << " est un multiple de 5." << endl;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}