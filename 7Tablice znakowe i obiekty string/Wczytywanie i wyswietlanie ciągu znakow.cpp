#include <iostream>
using namespace std;

int main() {
    char napis[21];

    cout << "Podaj ciag znakow (max 20 znakow): ";
    cin.getline(napis, 21);

    cout << "Wprowadzony ciag znakow: " << napis << endl;

    return 0;
}