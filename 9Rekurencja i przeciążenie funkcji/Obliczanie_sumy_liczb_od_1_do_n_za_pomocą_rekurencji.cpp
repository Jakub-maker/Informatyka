#include <iostream>
using namespace std;

int getNumberFromUser() {
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    return n;
}

int calculateSumRecursive(int n) {
    if (n <= 0) return 0;
    return n + calculateSumRecursive(n - 1);
}

void displayResult(int result, int n) {
    cout << "Suma liczb od 1 do " << n << " wynosi: " << result << endl;
}

int main() {
    int n = getNumberFromUser();
    int result = calculateSumRecursive(n);
    displayResult(result, n);
    return 0;
}