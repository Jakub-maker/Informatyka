#include <iostream>
using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

int main() {
    Osoba osoba;

    osoba.imie = "Jan";
    osoba.nazwisko = "Kowalski";
    osoba.wiek = 25;

    cout << "Dane przed modyfikacja:" << endl;
    cout << "Imie: " << osoba.imie
         << ", Nazwisko: " << osoba.nazwisko
         << ", Wiek: " << osoba.wiek << endl;

    osoba.wiek = 30;

    cout << "\nDane po modyfikacji:" << endl;
    cout << "Imie: " << osoba.imie
         << ", Nazwisko: " << osoba.nazwisko
         << ", Wiek: " << osoba.wiek << endl;

    return 0;
}