#include <iostream>
using namespace std;

int main() {
    int tab[10];
    int suma = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tab[i];
    }

    cout << "Liczby parzyste: ";
    for (int i = 0; i < 10; i++) {
        if (tab[i] % 2 == 0) {
            cout << tab[i] << ", ";
            suma += tab[i];
        }
    }

    cout << endl;
    cout << "Suma liczb parzystych: " << suma << endl;

    return 0;
}
