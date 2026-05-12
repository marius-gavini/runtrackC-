#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    double note;

    do {
        SetConsoleOutputCP(65001);
        cout << "Entrez une note (0-20) : ";
        cin >> note;

        if (note < 0 || note > 20)
            cout << "Note invalide, réessayez." << endl;

    } while (note < 0 || note > 20);

    if (note > 10)
        cout << "Validé";
    else
        cout << "Non validé";

    return 0;
}