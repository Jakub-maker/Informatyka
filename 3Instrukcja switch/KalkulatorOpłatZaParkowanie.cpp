#include <iostream>
using namespace std;

int main() {
    int godziny;
    char pojazd;
    double oplata = 0;

    cout << "Podaj liczbe godzin parkowania: ";
    cin >> godziny;

    cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
    cin >> pojazd;

    switch(pojazd) {
        case 'S':
        case 's':
            oplata = godziny * 5;
            cout << "Oplata za parkowanie: " << oplata << " zl" << endl;
            break;
        case 'M':
        case 'm':
            oplata = godziny * 3;
            cout << "Oplata za parkowanie: " << oplata << " zl" << endl;
            break;
        case 'A':
        case 'a':
            oplata = godziny * 10;
            cout << "Oplata za parkowanie: " << oplata << " zl" << endl;
            break;
        default:
            cout << "Blad: nieznany typ pojazdu!" << endl;
    }

    return 0;
}