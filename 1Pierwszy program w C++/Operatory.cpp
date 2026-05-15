#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Podaj pierwsza liczbe: ";
    cin >> a;

    cout << "Podaj druga liczbe: ";
    cin >> b;

    cout << "Suma: " << (a + b) << endl;
    cout << "Roznica: " << (a - b) << endl;
    cout << "Iloczyn: " << (a * b) << endl;

    if (b != 0) {
        cout << "Iloraz: " << (a / b) << endl;
        cout << "Reszta z dzielenia: " << (a % b) << endl;
    } else {
        cout << "Nie mozna dzielic przez 0!" << endl;
    }

    return 0;
}
