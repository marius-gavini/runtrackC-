#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Entrez le calcul (ex: 5 + 3) : ";
    cin >> a >> op >> b;

    switch (op) {
        case '+':
            cout << "Résultat : " << a + b;
            break;
        case '-':
            cout << "Résultat : " << a - b;
            break;
        case '*':
            cout << "Résultat : " << a * b;
            break;
        case '/':
            if (b == 0)
                cout << "Erreur : division par zéro !";
            else
                cout << "Résultat : " << a / b;
            break;
        default:
            cout << "Opérateur inconnu !";
    }

    return 0;
}