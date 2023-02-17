#include <iostream>

using namespace std;

int main() {

    int broj;
    int najveci_broj = 0;

    for (;;) {

        cout << "Unesite broj: ";
        cin >> broj;

        if (broj == 0) {
            break;
        } else if (broj > najveci_broj) {
            najveci_broj = broj;
        }
    }

    cout << endl;
    cout << "Najveci uneseni broj: " << najveci_broj <<endl;

    return 0;
}
