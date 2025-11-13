#include <iostream>
using namespace std;

int main() {
    double celsius, wynik;
    char jednostka;

    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> celsius;

    cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    cin >> jednostka;

    switch(jednostka) {
        case 'K':
        case 'k':
      
            wynik = celsius + 273.15;
            cout << "Temperatura w Kelvinach: " << wynik << endl;
            break;
        case 'F':
        case 'f': 
           
            wynik = (celsius * 9.0 / 5.0) + 32.0;
            cout << "Temperatura w stopniach Fahrenheita: " << wynik << endl;
            break;
        default:
        
            cout << "Blad: nieznana jednostka! Wybierz K lub F." << endl;
    }

    return 0;
}
