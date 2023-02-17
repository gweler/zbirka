#include <iostream>

using namespace std;

int main() {

    int broj;
    int najveci_broj = 0;

    do {

        cout << "Unesite broj: ";
        cin >> broj;

        if (broj !=0 && broj > najveci_broj) {
            najveci_broj = broj;
        }
    } while (broj != 0);

    cout << endl;
    cout << "Najveci broj: " << najveci_broj <<endl;

    return 0;
}
