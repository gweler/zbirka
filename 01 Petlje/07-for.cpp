#include <iostream>

using namespace std;

int main() {

    int drugi_broj = 1;
    int prvi_broj = 1;
    int zbir;

    cout << prvi_broj << " " << drugi_broj;

    for (int i = 0; i < 12; i++) {
        zbir = prvi_broj + drugi_broj;
        cout << " " << zbir;
        prvi_broj = drugi_broj;
        drugi_broj = zbir;
    }

    return 0;
}
