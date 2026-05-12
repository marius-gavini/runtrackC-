#include <iostream>
#include <cmath>  // pour pow()
using namespace std;

int main() {
    int n, temp, nbChiffres = 0, somme = 0;

    cout << "Entrez un nombre entier positif : ";
    cin >> n;

    // Compter le nombre de chiffres
    temp = n;
    while (temp != 0) {
        nbChiffres++;
        temp /= 10;
    }

    // Calculer la somme des chiffres^nbChiffres
    temp = n;
    while (temp != 0) {
        int chiffre = temp % 10;
        somme += pow(chiffre, nbChiffres);
        temp /= 10;
    }

    if (somme == n)
        cout << n << " est un nombre narcissique !" << endl;
    else
        cout << n << " n'est pas un nombre narcissique." << endl;

    return 0;
}