#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Podaj liczbe N: ";
    cin >> N;

    int suma = 0;
    int i = 1;

    while(i <= N)
    {
        suma += i;
        i++;
    }

    cout << "\nSuma liczb naturalnych do " << N << ": " << suma << endl;

    return 0;
}
