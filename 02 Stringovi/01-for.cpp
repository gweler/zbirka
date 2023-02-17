#include <iostream>
#include <string>

using namespace std;

int main() {

    string rijec;

    cout << "Unesite jednu rijec: ";
    cin >> rijec;

    for (int i = rijec.length() - 1; i >= 0; i--) {
        cout << rijec[i];
    }
  
    cout << endl;
  
    return 0;
}
