#include <iostream>

using namespace std;

char slovo(string ime, int redni_broj) {
    char c = ime[redni_broj - 1];
    return c;
}

int main() {
    char s = slovo("Programislav", 4);
    cout << s << endl;
    return 0;
}
