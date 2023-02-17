#include <iostream>

using namespace std;

int main() {

    int broj = -1;
    int najveci_broj = 0;

    while (broj != 0) {

        cout << "Unesite broj: ";
        cin >> broj;

        if (broj != 0 && broj > najveci_broj) {
            najveci_broj = broj;
        }
    }

    cout << endl;
    cout << "Najveci broj: " << najveci_broj <<endl;

    return 0;
}
