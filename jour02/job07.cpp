#include <iostream>
using namespace std;

int main() {
    int a,b,i;
    cout << "Entrez un premier nombre entier : ";
    cin >> a;
    
    do {
        cout << "Entrez un second nombre entier (doit être superieur au premier): ";
        cin >> b;
        if (b <= a){
            cout << "Erreur, le second doit être superieur au premier";
        }
    } while (b <= a);
    for ( i = a; i <= b; i++) {
            cout << i << endl;
    }
    return 0;
}