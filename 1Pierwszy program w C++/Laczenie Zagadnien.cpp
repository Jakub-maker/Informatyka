#include <iostream>
using namespace std;

int main() {
    int a, b, suma;

    cout << "Podaj pierwszą liczbę: ";
    cin >> a;

    cout << "Podaj drugą liczbę: ";
    cin >> b;

    suma = a + b;
    cout << "Suma: " << suma << endl;

    if (suma % 2 == 0) {
        cout << "Suma jest liczbą parzystą." << endl;
    } else {
        cout << "Suma jest liczbą nieparzystą." << endl;
    }

    return 0;
}