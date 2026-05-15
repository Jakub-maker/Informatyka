#include <iostream>
#include <fstream>
using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

int main() {
    ifstream sprawdz("dane.txt");

    if (!sprawdz) {
        ofstream plik("dane.txt");
        plik << "Jan Kowalski 25\n";
        plik << "Anna Nowak 30\n";
        plik.close();
        cout << "Plik nie istnial. Utworzono nowy." << endl;
    } else {
        sprawdz.close();
    }

    char wybor;
    cout << "Czy chcesz dodac nowa osobe? (t/n): ";
    cin >> wybor;

    if (wybor == 't') {
        Osoba o;

        cout << "Podaj imie: ";
        cin >> o.imie;

        cout << "Podaj nazwisko: ";
        cin >> o.nazwisko;

        cout << "Podaj wiek: ";
        cin >> o.wiek;

        ofstream plik("dane.txt", ios::app);
        plik << o.imie << " " << o.nazwisko << " " << o.wiek << "\n";
        plik.close();
    }

    ifstream plik("dane.txt");

    string imie, nazwisko;
    int wiek;

    cout << "\nDane w pliku:\n";

    while (plik >> imie >> nazwisko >> wiek) {
        cout << "Imie: " << imie
             << ", Nazwisko: " << nazwisko
             << ", Wiek: " << wiek << endl;
    }

    plik.close();

    return 0;
}