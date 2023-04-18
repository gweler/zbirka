#include <cmath>
#include <iostream>

using namespace std;

int main() {

    float kateta1;
    float kateta2;
    float k1_na_kvadrat;
    float k2_na_kvadrat;
    float hipotenuza;

    cout << "Unesite duzinu prve katete: ";
    cin >> kateta1;
    cout << "Unesite duzinu druge katete: ";
    cin >> kateta2;

    k1_na_kvadrat = pow(kateta1, 2);
    k2_na_kvadrat = pow(kateta2, 2);
    hipotenuza = sqrt(k1_na_kvadrat + k2_na_kvadrat);

    cout << "Duzina hipotenuze je: " << hipotenuza;
    cout << endl;
}
