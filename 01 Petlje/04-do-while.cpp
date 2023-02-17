#include <iostream>

using namespace std;

int main() {

    int broj = -1;
    int najmanji_broj = 1000000;

    do {
        cout << "Unesite broj: ";
        cin >> broj;

        if (broj !=0 && broj < najmanji_broj) {
            najmanji_broj = broj;
        }
    } while (broj != 0);

    cout << endl;
    cout << "Najmanji uneseni broj: " << najmanji_broj <<endl;

    return 0;
}
