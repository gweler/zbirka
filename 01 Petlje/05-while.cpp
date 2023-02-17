#include <iostream>

using namespace std;

int main() {

    int broj = -1;
    int najmanji_broj = 1000000;
    int najveci_broj = 0;
    int razlika;

    while (broj != 0) {

        cout << "Unesite broj: ";
        cin >> broj;

        if (broj !=0) {
            if (broj > najveci_broj) {
                najveci_broj = broj;
            }
            if (broj < najmanji_broj) {
                najmanji_broj = broj;
            }
        }
    }

    cout << endl;
    cout << "Najveci broj: " << najveci_broj <<endl;
    cout << "Najmanji broj: " << najmanji_broj <<endl;
    razlika = najveci_broj - najmanji_broj;
    cout << "Razlika: " << razlika <<endl;

    return 0;
}
