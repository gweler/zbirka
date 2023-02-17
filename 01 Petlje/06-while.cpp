#include <iostream>

using namespace std;

int main() {

    int broj;
    int faktorijel = 1;

    cout << "Unesite broj: ";
    cin >> broj;

    int i = 1;
    while (i <= broj) {
        faktorijel = faktorijel * i;
        i++;
    }

    cout << endl;
    cout << "Faktorijel: " << faktorijel <<endl;

    return 0;
}
