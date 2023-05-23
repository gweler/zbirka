#include <iostream>

using namespace std;

void da_li_je_djeljiv(int broj, int sa_brojem) {
    if (broj % sa_brojem == 0) {
        cout << "Prvi broj je djeljiv sa drugim brojem" << endl;
    } else {
        cout << "Prvi broj nije djeljiv sa drugim brojem" << endl;
    }
    return;
}

int main() {
    cout << "Prvi test primjer: " << endl;
    da_li_je_djeljiv(27, 3);
    cout << endl;

    cout << "Drugi test primjer: " << endl;
    da_li_je_djeljiv(74, 6);
    cout << endl;
    return 0;
}
