#include <iostream>
using namespace std;

int main() {
    int punkty;

    cout << "Podaj wynik egzaminu (liczba punktow): ";
    cin >> punkty;

    if (punkty < 0 || punkty > 100) {
        cout << "Blad: liczba punktow musi byc w zakresie 0–100." << endl;
    }
    else if (punkty <= 49) {
        cout << "Ocena: Niedostateczna" << endl;
    }
    else if (punkty <= 69) {
        cout << "Ocena: Dostateczna" << endl;
    }
    else if (punkty <= 84) {
        cout << "Ocena: Dobra" << endl;
    }
    else if (punkty <= 99) {
        cout << "Ocena: Bardzo dobra" << endl;
    }
    else { 
        cout << "Ocena: Celujaca" << endl;
    }

    return 0;
}
