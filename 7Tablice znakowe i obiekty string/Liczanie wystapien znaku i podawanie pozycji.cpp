#include <iostream>
using namespace std;

int main() {
    char napis[50];
    char znak;
    int licznik = 0;

    cout << "Podaj ciag znakow: ";
    cin.getline(napis, 50);

    cout << "Podaj znak do zliczenia: ";
    cin >> znak;

    cout << "Pozycje wystapien: ";

    for (int i = 0; napis[i] != '\0'; i++) {
        if (napis[i] == znak) {
            licznik++;
            cout << i;

            if (napis[i + 1] != '\0') {
                cout << ", ";
            }
        }
    }

    cout << endl;
    cout << "Liczba wystapien znaku '" << znak << "': "
         << licznik << endl;

    return 0;
}