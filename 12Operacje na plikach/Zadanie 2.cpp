#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

int main() {
    int wybor;
    cout << "Wybierz operacje:\n1 - Utworz plik\n2 - Usun plik\n3 - Zmien nazwe pliku\n";
    cin >> wybor;

    string nazwa, nowaNazwa;

    if (wybor == 1) {
        cout << "Podaj nazwe pliku: ";
        cin >> nazwa;

        ofstream plik(nazwa);
        plik.close();

        cout << "Plik zostal utworzony" << endl;
    }

    else if (wybor == 2) {
        cout << "Podaj nazwe pliku do usuniecia: ";
        cin >> nazwa;

        if (remove(nazwa.c_str()) == 0)
            cout << "Plik usuniety" << endl;
        else
            cout << "Blad usuwania" << endl;
    }

    else if (wybor == 3) {
        cout << "Podaj stara nazwe: ";
        cin >> nazwa;

        cout << "Podaj nowa nazwe: ";
        cin >> nowaNazwa;

        if (rename(nazwa.c_str(), nowaNazwa.c_str()) == 0)
            cout << "Zmieniono nazwe pliku" << endl;
        else
            cout << "Blad zmiany nazwy" << endl;
    }

    return 0;
}