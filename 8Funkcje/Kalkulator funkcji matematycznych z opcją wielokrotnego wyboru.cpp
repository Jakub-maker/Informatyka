#include <iostream>

using namespace std;

double suma(double a, double b) {
    return a + b;
}

double roznica(double a, double b) {
    return a - b;
}

double iloczyn(double a, double b) {
    return a * b;
}

double iloraz(double a, double b) {
    return a / b;
}

int main() {
    int wybor;
    double a, b;

    do {
        cout << "Wybierz funkcje:" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Roznica" << endl;
        cout << "3. Iloczyn" << endl;
        cout << "4. Iloraz" << endl;
        cout << "0. Wyjscie" << endl;

        cin >> wybor;

        if (wybor >= 1 && wybor <= 4) {
            cout << "Podaj pierwsza liczbe: ";
            cin >> a;

            cout << "Podaj druga liczbe: ";
            cin >> b;
        }

        switch (wybor) {
            case 1:
                cout << "Wynik: " << suma(a, b) << endl;
                break;

            case 2:
                cout << "Wynik: " << roznica(a, b) << endl;
                break;

            case 3:
                cout << "Wynik: " << iloczyn(a, b) << endl;
                break;

            case 4:
                if (b != 0) {
                    cout << "Wynik: " << iloraz(a, b) << endl;
                } else {
                    cout << "Nie mozna dzielic przez 0!" << endl;
                }
                break;

            case 0:
                cout << "Koniec programu." << endl;
                break;

            default:
                cout << "Niepoprawny wybor!" << endl;
        }

        cout << endl;

    } while (wybor != 0);

    return 0;
}