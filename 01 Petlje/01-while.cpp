#include <iomanip>
#include <iostream>

using namespace std;

int main() {

    float prosjek;
    float zbir_ocjena = 0.0;
    int ocjena = -1;
    int broj_ocjena = 0;

    while (ocjena != 0) {
        cout << "Unesite ocjenu: ";
        cin >> ocjena;
        if (ocjena != 0) {
            zbir_ocjena = zbir_ocjena + ocjena;
            broj_ocjena = broj_ocjena + 1;
        }
    }

    prosjek = zbir_ocjena / broj_ocjena;

    cout << endl;
    cout << "Prosjek unesenih ocjena je: ";
    cout << fixed << setprecision(2);
    cout << prosjek;
    cout << endl;

    return 0;
}
