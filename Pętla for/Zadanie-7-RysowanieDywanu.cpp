#include <iostream>
using namespace std;

int main()
{
    int szer, wys;
    cout << "Podaj szerokosc: ";
    cin >> szer;

    cout << "Podaj wysokosc: ";
    cin >> wys;

    for(int i = 0; i < szer; i++)
        cout << "-";
    cout << endl;
    
    for(int i = 0; i < wys - 2; i++)
    {
        cout << "|";

        for(int j = 0; j < szer - 2; j++)
        {
            if((i + j) % 2 == 0)
                cout << "*";
            else
                cout << "#";
        }

        cout << "|" << endl;
    }

    if(wys > 1)
    {
        for(int i = 0; i < szer; i++)
            cout << "-";
        cout << endl;
    }

    return 0;
}
