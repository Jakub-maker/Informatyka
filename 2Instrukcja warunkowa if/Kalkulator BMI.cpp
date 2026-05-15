#include <iostream>
using namespace std;

int main() {
    double waga, wzrost, bmi;

    cout << "Podaj wage (w kg): ";
    cin >> waga;

    cout << "Podaj wzrost (w metrach): ";
    cin >> wzrost;

    if (waga <= 0 || wzrost <= 0) {
        cout << "Blad: waga i wzrost musza byc liczbami dodatnimi." << endl;
        return 0;
    }

    bmi = waga / (wzrost * wzrost);

    cout << "\nTwoje BMI wynosi: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Twoj stan wagowy: Niedowaga" << endl;
    }
    else if (bmi < 25) {
        cout << "Twoj stan wagowy: W normie" << endl;
    }
    else if (bmi < 30) {
        cout << "Twoj stan wagowy: Nadwaga" << endl;
    }
    else {
        cout << "Twoj stan wagowy: Otylosc" << endl;
    }

    return 0;
}