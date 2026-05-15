#include <iostream>
using namespace std;

int getNumberFromUser() {
    int n;
    cout << "Podaj liczbe elementow: ";
    cin >> n;
    return n;
}

int calculateFibonacciRecursive(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return calculateFibonacciRecursive(n - 1) + calculateFibonacciRecursive(n - 2);
}

void displayFibonacciSequence(int n) {
    cout << "Ciag Fibonacciego: ";
    for (int i = 0; i < n; i++) {
        cout << calculateFibonacciRecursive(i) << " ";
    }
    cout << endl;
}

int main() {
    int n = getNumberFromUser();
    displayFibonacciSequence(n);
    return 0;
}