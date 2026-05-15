#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void DuzaMala(int liczba, int wylosowanaLiczba) {
    if (liczba < wylosowanaLiczba) {
        cout << "Za malo" << endl;
    }
    else if (liczba > wylosowanaLiczba) {
        cout << "Za duzo" << endl;
    }
}
bool CheckLiczba(int liczba, int wylosowanaLiczba) {
    if (liczba == wylosowanaLiczba) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    srand(time(NULL));
    int wylosowanaLiczba = rand() % 100 + 1;
    int liczba;
    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        DuzaMala(liczba, wylosowanaLiczba);
    } while (!CheckLiczba(liczba, wylosowanaLiczba));
    cout << "Gratulacje! Odgadles liczbe." << endl;
    return 0;
}