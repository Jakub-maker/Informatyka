#include <iostream>
using namespace std;

int main()
{
    int szer, wys;
    cout << "Podaj szerokosc: ";
    cin >> szer;

    cout << "Podaj wysokosc: ";
    cin >> wys;

    int margin = 0;

    for(int i = 0; i < wys; i++)
    {
        for(int j = 0; j < margin; j++)
            cout << " ";

        for(int j = 0; j < szer - 2 * margin; j++)
            cout << "*";

        cout << endl;
        margin++;
    }

    return 0;
}
