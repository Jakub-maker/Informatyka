#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char napis[50];
    char odwrocony[50];

    cout << "Podaj ciag znakow: ";
    cin.getline(napis, 50);

    int dlugosc = strlen(napis);

    int j = 0;

    for (int i = dlugosc - 1; i >= 0; i--) {
        odwrocony[j] = napis[i];
        j++;
    }

    odwrocony[j] = '\0';

    cout << "Odwrocony ciag: " << odwrocony << endl;

    return 0;
}