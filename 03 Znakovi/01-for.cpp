#include <iostream>
#include <string>

using namespace std;

int main() {

    char slovo;
    string recenica;

    cout << "Unesite recenicu: ";
    getline(cin, recenica);
    cout << endl;

    for (int i = 0; i < recenica.length(); i++) {
        slovo = recenica[i];
        if (slovo == 'a' || slovo == 'A') {
            cout << 'X';
        } else if (slovo == 'e' || slovo == 'E') {
            cout << 'X';
        } else if (slovo == 'i' || slovo == 'I') {
            cout << 'X';
        } else if (slovo == 'o' || slovo == 'O') {
            cout << 'X';
        } else if (slovo == 'u' || slovo == 'U') {
            cout << 'X';
        } else {
            cout << slovo;
        }
    }

    cout << endl;

    return 0;
}
