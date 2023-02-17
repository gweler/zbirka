#include <iostream>

using namespace std;

int main() {

    int drugi_broj = 1;
    int prvi_broj = 1;
    int zbir;

    cout << prvi_broj << " " << drugi_broj;

    int i = 0;
    do {
        zbir = prvi_broj + drugi_broj;
        cout << " " << zbir;
        prvi_broj = drugi_broj;
        drugi_broj = zbir;
        i++;
    } while (i < 12);

    return 0;
}
