#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    a = 39;
    b = 45;
    cout << "Entrez un nombre entier : ";
    cin >> c;
    
    if (c >= a && c <= b){
            cout << "GAGNE" << endl;
    } else {
        cout << "PERDU" << endl;
    }
    
    return 0;
}