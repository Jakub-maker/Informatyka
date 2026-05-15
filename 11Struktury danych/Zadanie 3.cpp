#include <iostream>
using namespace std;

struct Samochod {
    string marka;
    string model;
    int rok_produkcji;
};

void WyswietlDane(Samochod s) {
    cout << "Dane samochodu:" << endl;
    cout << "Marka: " << s.marka << endl;
    cout << "Model: " << s.model << endl;
    cout << "Rok produkcji: " << s.rok_produkcji << endl;
}

int main() {
    Samochod auto1;

    auto1.marka = "Toyota";
    auto1.model = "Corolla";
    auto1.rok_produkcji = 2018;

    WyswietlDane(auto1);

    return 0;
}