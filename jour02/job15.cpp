#include <iostream>
using namespace std;

int main() {
    int n;
    long long a = 0, b = 1, temp;

    do {
        cout << "Entrez la limite : ";
        cin >> n;
        if (n < 0)
            cout << "Valeur negative, reessayez." << endl;
    } while (n < 0);

    cout << "Suite de Fibonacci : ";
    while (a <= n) {
        cout << a << " ";
        temp = a + b;
        a = b;
        b = temp;
    }
    cout << endl;

    return 0;
}