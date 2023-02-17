#include <iostream>

using namespace std;

int main() {

    int broj;
    int faktorijel = 1;

    cout << "Unesite broj: ";
    cin >> broj;

    int i = 1;
    do {
        faktorijel = faktorijel * i;
        i++;
    } while (i <= broj);

    cout << endl;
    cout << "Faktorijel: " << faktorijel <<endl;

    return 0;
}
