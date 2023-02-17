#include <iostream>

using namespace std;

int main() {

    int broj;
    int faktorijel = 1;

    cout << "Unesite broj: ";
    cin >> broj;

    for (int i = 1; i <= broj; i++) {
        faktorijel = faktorijel * i;
    }

    cout << endl;
    cout << "Faktorijel: " << faktorijel <<endl;

    return 0;
}
