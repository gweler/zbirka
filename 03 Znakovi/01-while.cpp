#include <iostream>
#include <string>

using namespace std;

int main() {

    char slovo;
    string recenica;

    cout << "Unesite recenicu: ";
    getline(cin, recenica);
    cout << endl;

    int i = 0;
    while (i < recenica.length()) {
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
        i++;
    }

    cout << endl;

    return 0;
}
