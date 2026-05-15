#include <iostream>
using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

int main() {
    Osoba osoby[3];

    osoby[0] = {"Jan", "Kowalski", 25};
    osoby[1] = {"Anna", "Nowak", 30};
    osoby[2] = {"Piotr", "Wisniewski", 40};

    cout << "Dane zapisane w tablicy struktur:" << endl;

    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". Imie: " << osoby[i].imie
             << ", Nazwisko: " << osoby[i].nazwisko
             << ", Wiek: " << osoby[i].wiek << endl;
    }

    return 0;
}