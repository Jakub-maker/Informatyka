#include <iostream>
using namespace std;

int main()
{
    int liczba;
    char kontynuuj;

    do
    {
        cout << "Podaj liczbe: ";
        cin >> liczba;

        cout << "Wprowadziles liczbe: " << liczba << endl;

        cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n): ";
        cin >> kontynuuj;

    } while (kontynuuj == 't' || kontynuuj == 'T');

    cout << "Dziekuje za wprowadzanie liczb!" << endl;

    return 0;
}
