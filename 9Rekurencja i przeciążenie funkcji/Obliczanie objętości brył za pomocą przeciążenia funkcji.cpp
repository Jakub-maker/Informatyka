#include <iostream>

using namespace std;

double CalculateVolume(double a) {
    return a * a * a;
}

double CalculateVolume(double a, double b, double h) {
    return a * b * h;
}

double CalculateVolume(int r, double h) {
    const double pi = 3.1415;

    return pi * r * r * h;
}

void DisplayResult(double objetosc) {
    cout << "Objetosc wynosi: "
         << objetosc
         << endl;
}

int main() {
    int wybor;

    cout << "Wybierz bryle do obliczenia objetosci:" << endl;
    cout << "1 - Szescian (V = a^3)" << endl;
    cout << "2 - Prostopadloscian (V = a * b * h)" << endl;
    cout << "3 - Walec (V = pi * r^2 * h)" << endl;

    cout << "Wybierz numer bryly: ";
    cin >> wybor;

    switch (wybor) {
        case 1: {
            double a;

            cout << "Podaj dlugosc boku: ";
            cin >> a;

            DisplayResult(CalculateVolume(a));
            break;
        }

        case 2: {
            double a, b, h;

            cout << "Podaj dlugosc: ";
            cin >> a;

            cout << "Podaj szerokosc: ";
            cin >> b;

            cout << "Podaj wysokosc: ";
            cin >> h;

            DisplayResult(CalculateVolume(a, b, h));
            break;
        }

        case 3: {
            int r;
            double h;

            cout << "Podaj promien: ";
            cin >> r;

            cout << "Podaj wysokosc: ";
            cin >> h;

            DisplayResult(CalculateVolume(r, h));
            break;
        }

        default:
            cout << "Niepoprawny wybor!" << endl;
    }

    return 0;
}