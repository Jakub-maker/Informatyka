#include <iostream>
using namespace std;

int main() {
    char napis[21];

    cout << "Podaj ciag znakow (max 20 znakow): ";
    cin.getline(napis, 21);

    for (int i = 0; napis[i] != '\0'; i++) {
        if (napis[i] == 'a') {
            napis[i] = 'o';
        }
    }

    cout << "Zmodyfikowany ciag znakow: " << napis << endl;

    return 0;
}