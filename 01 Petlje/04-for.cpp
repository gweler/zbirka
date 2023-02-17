#include <iostream>

using namespace std;

int main() {

    int broj;
    int najmanji_broj = 1000000;

    for (;;) {

        cout << "Unesite broj: ";
        cin >> broj;

        if (broj == 0) {
            break;
        } else if (broj < najmanji_broj) {
            najmanji_broj = broj;
        }
    }

    cout << endl;
    cout << "Najmanji uneseni broj: " << najmanji_broj <<endl;

    return 0;
}
