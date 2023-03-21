#include <iostream>

using namespace std;

int main() {

    char znak;

    cout << "Unesite broj, slovo, znak za modulo, ili znak za dijeljenje: ";

    cin >> znak;

    cout << endl;

    switch (znak) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            cout << "Korisnik je unio broj!";
            break;
        case '%':
            cout << "Korisnik je unio znak za modulo!";
            break;
        case '/':
            cout << "Korisnik je unio znak za dijeljenje!";
            break;
        default:
            cout << "Korisnik je unio slovo!";
            break;
    }

    cout << endl;

    return 0;
}
