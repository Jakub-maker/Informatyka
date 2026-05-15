#include <iostream>
using namespace std;

int main()
{
    int licznik = 0;

    for(int i = 0; i <= 9; i++)
    {
        for(int j = 0; j <= 9; j++)
        {
            for(int k = 0; k <= 9; k++)
            {
                if(i != j && i != k && j != k)
                {
                    cout << i << j << k << endl;
                    licznik++;
                }
            }
        }
    }

    cout << "Liczb bez powtarzajacych sie cyfr: " << licznik << endl;

    return 0;
}
