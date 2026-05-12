#include <iostream>
#include <iomanip>  // pour setw()
using namespace std;

int main() {

    cout << setw(4) << "I";
    for (int j = 1; j <= 10; j++)
        cout << setw(4) << j;
    cout << endl;

    for (int j = 0; j <= 10; j++)
        cout << "----";
    cout << endl;

    for (int i = 1; i <= 10; i++) {
        cout << setw(4) << i << " I";
        for (int j = 1; j <= 10; j++)
            cout << setw(4) << i * j;
        cout << endl;
    }

    return 0;
}