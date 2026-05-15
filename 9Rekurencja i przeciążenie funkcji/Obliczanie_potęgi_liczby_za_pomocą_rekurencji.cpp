#include <iostream>
using namespace std;

void getData(int &a, int &n) {
    cout << "Podaj liczbe podstawowa: ";
    cin >> a;
    cout << "Podaj wykladnik: ";
    cin >> n;
}

int calculatePowerRecursive(int a, int n) {
    if (n == 0) return 1;
    return a * calculatePowerRecursive(a, n - 1);
}

void displayResult(int result, int a, int n) {
    cout << a << " do potegi " << n << " wynosi: " << result << endl;
}

int main() {
    int a, n;
    getData(a, n);
    int result = calculatePowerRecursive(a, n);
    displayResult(result, a, n);
    return 0;
}