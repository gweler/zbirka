#include <iostream>

using namespace std;

int moj_zbir(int a, int b) {
    int zbir;
    zbir = a + b;
    return zbir;
}

int main() {
    int zbir;
    zbir = moj_zbir(5, 9);
    cout << "Zbir = " << zbir << endl;
    return 0;
}
