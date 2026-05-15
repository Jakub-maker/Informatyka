#include <iostream>
#include <string>

using namespace std;

string GetTextFromUser() {
    string tekst;

    cout << "Podaj ciag znakow: ";
    getline(cin, tekst);

    return tekst;
}

string ReverseString(string tekst) {
    string odwrocony = "";

    for (int i = tekst.length() - 1; i >= 0; i--) {
        odwrocony += tekst[i];
    }

    return odwrocony;
}

void DisplayResult(string tekst) {
    cout << "Odwrocony ciag: " << tekst << endl;
}

int main() {
    string tekst;
    string odwrocony;

    tekst = GetTextFromUser();

    odwrocony = ReverseString(tekst);

    DisplayResult(odwrocony);

    return 0;
}