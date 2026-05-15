#include <iostream>

using namespace std;

bool czyParzysta(int liczba) {
    if (liczba % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int liczba;

    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;

    if (czyParzysta(liczba)) {
        cout << "Liczba " << liczba << " jest parzysta." << endl;
    } else {
        cout << "Liczba " << liczba << " jest nieparzysta." << endl;
    }

    return 0;
}