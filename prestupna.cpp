/*

Prestupna godina je ona koja ima jedan dodatan dan
(29. februar). Prestupne godine su djeljive sa 4,
naprimjer 2016. godina je prestupna. Ali, postoje dva
izuzetka.

"Okrugle" godine, na primjer 1700, 1800, 1900,
nisu prestupne. Drugi izuzetak je da su "okrugle"
godine djeljive sa 400 prestupne. Tako, na primjer,
2000. godina je prestupna.

Napiši program koji ispisuje da li je unesena godina
prestupna ili ne. Koristiti funkciju koja vrsi provjeru.

 */

#include <iostream>

using namespace std;

bool da_li_je_prestupna(int godina) {

		bool uslov;
		bool izuzetak1;
		bool izuzetak2;
		bool prestupna;

		uslov = godina % 4 == 0;
		izuzetak1 = godina % 100 != 0;
		izuzetak2 = godina % 400 == 0;

		prestupna = uslov && izuzetak1 || izuzetak2;

		return prestupna;
}

int main() {

	bool prestupna;
	int godina;

	cout << "Unesite godinu: ";
	cin >> godina;

	prestupna = da_li_je_prestupna(godina);

	cout << "Unesena godina ";
	prestupna ? cout << "JESTE " : cout << "NIJE ";
	cout << "prestupna.";
	cout << endl;

	return 0;
}
