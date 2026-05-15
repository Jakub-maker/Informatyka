#include <iostream>
using namespace std;

int main() {
    int tab[10];

    cout << "Podaj 10 liczb calkowitych:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tab[i];
    }

    int min = tab[0];
    for (int i = 1; i < 10; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
    }

    cout << "Najmniejsza liczba to: " << min << endl;

    return 0;
}