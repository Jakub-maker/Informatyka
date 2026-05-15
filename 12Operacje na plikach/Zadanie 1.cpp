#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream plik("dane.txt");

    string imie, nazwisko;
    int wiek;

    if (!plik) {
        cout << "Nie mozna otworzyc pliku" << endl;
        return 0;
    }

    while (plik >> imie >> nazwisko >> wiek) {
        cout << "Imie: " << imie
             << ", Nazwisko: " << nazwisko
             << ", Wiek: " << wiek << endl;
    }

    plik.close();

    return 0;
}