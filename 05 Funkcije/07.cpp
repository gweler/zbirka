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
