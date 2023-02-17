#include <iostream>
#include <string>

using namespace std;

int main() {

    string rijec;

    cout << "Unesite jednu rijec: ";
    cin >> rijec;

    int i = 0;
    do {
        cout << rijec[i];
        i = i + 3;
    } while (i < rijec.length());

    cout << endl;

    return 0;
}
