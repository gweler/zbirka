#include <iostream>

using namespace std;

bool da_li_je_djeljiv(int broj, int sa_brojem) {
    if (broj % sa_brojem == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    cout << "Prvi test primjer: " << endl;
    bool b1 = da_li_je_djeljiv(27, 3);
    b1 ? cout << "TACNO" : cout << "NETACNO";
    cout << endl;

    cout << "Drugi test primjer: " << endl;
    bool b2 = da_li_je_djeljiv(74, 6);
    b2 ? cout << "TACNO" : cout << "NETACNO";
    cout << endl;

    return 0;
}
