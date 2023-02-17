#include <iostream>

using namespace std;

int main() {

    int broj_jedinica = 0;
    int broj_petica = 0;
    int broj_pogresnih_ocjena = 0;
    int ocjena = -1;

    while (ocjena != 0) {
        
		cout << "Unesite ocjenu: ";
        cin >> ocjena;
        
		if (ocjena == 1) {
            broj_jedinica++;
        } else if (ocjena == 5) {
            broj_petica++;
        } else if (ocjena !=0 && ocjena < 1 || ocjena > 5) {
            broj_pogresnih_ocjena++;
        }
    }

    cout << "Broj jedinica: " << broj_jedinica <<endl;
    cout << "Broj petica: " << broj_petica <<endl;
    cout << "Broj pogresnih ocjena: " << broj_pogresnih_ocjena <<endl;

    return 0;
}
