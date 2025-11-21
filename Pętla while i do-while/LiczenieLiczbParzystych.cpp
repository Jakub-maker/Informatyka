#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Podaj liczbe calkowita dodatnia N: ";
    cin >> N;

    int i = 1;
    int licznik = 0;

    do
    {
        if(i % 2 == 0)
            licznik++;

        i++;

    } while(i <= N);

    cout << "Liczba liczb parzystych od 1 do " << N << " wynosi: " << licznik << endl;

    return 0;
}
