#include <iostream>
#include <string>

using namespace std;

int main() {

    string rijec;

    cout << "Unesite jednu rijec: ";
    cin >> rijec;

    for (int i = 0; i < rijec.length(); i = i + 3) {
        cout << rijec[i];
    }

    cout << endl;

    return 0;
}
