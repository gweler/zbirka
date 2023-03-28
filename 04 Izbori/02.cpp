#include <iostream>

using namespace std;

int main() {

    int broj_razmaka = 0;
    int broj_samoglasnika = 0;
    int broj_suglasnika = 0;
    int broj_tacaka = 0;
    int broj_zareza = 0;
    string recenica;

    cout << "Unesite recenicu: ";

    getline(cin, recenica);

    cout << endl;

    for (int i = 0; i < recenica.length(); i++) {
        switch (recenica[i]) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                broj_samoglasnika++;
                break;
            case ' ':
                broj_razmaka++;
                break;
            case '.':
                broj_tacaka++;
                break;
            case ',':
                broj_zareza++;
                break;
            default:
                broj_suglasnika++;
                break; // Nije obavezno
        }
    }

    cout << "Broj suglasnika: " << broj_suglasnika << endl;
    cout << "Broj samoglasnika: " << broj_samoglasnika << endl;
    cout << "Broj razmaka: " << broj_razmaka << endl;
    cout << "Broj zareza: " << broj_zareza << endl;
    cout << "Broj tacaka: " << broj_tacaka << endl;

    return 0;
}
