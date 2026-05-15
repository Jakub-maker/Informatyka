#include <iostream>

using namespace std;

int GetNumberFromUser() {
    int liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    return liczba;
}

int CalculateFactorial(int liczba) {
    int silnia = 1;

    for (int i = 1; i <= liczba; i++) {
        silnia *= i;
    }

    return silnia;
}

void DisplayResult(int liczba, int silnia) {
    cout << "Silnia liczby "
         << liczba
         << " wynosi: "
         << silnia
         << endl;
}

int main() {
    int liczba;
    int silnia;

    liczba = GetNumberFromUser();

    silnia = CalculateFactorial(liczba);

    DisplayResult(liczba, silnia);

    return 0;
}