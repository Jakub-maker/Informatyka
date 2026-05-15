#include <iostream>
using namespace std;
int ObliczSume(int *tablica, int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += *(tablica + i);
    }
    return suma;
}
int main() {
    const int ROZMIAR = 4;
    int tablica[ROZMIAR] = {5, 10, 15, 20};
    int suma = ObliczSume(tablica, ROZMIAR);
    cout << "Suma elementow tablicy: "
         << suma
         << endl;
    for (int i = 0; i < ROZMIAR; i++) {
        cout << "Podaj nowa wartosc dla elementu "
             << i
             << ": ";
        cin >> *(tablica + i);
    }
    suma = ObliczSume(tablica, ROZMIAR);
    cout << "Nowa tablica:" << endl;
    for (int i = 0; i < ROZMIAR; i++) {
        cout << *(tablica + i) << " ";
    }
    cout << endl;
    cout << "Nowa suma elementow tablicy: "
         << suma
         << endl;
    return 0;
}