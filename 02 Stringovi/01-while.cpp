#include <iostream>
#include <string>

using namespace std;

int main() {

    string rijec;

    cout << "Unesite jednu rijec: ";
    cin >> rijec;

    int i = rijec.length() - 1;
    while (i >= 0) {
        cout << rijec[i];
        i = i - 1;
    }

    cout << endl;

    return 0;
}
