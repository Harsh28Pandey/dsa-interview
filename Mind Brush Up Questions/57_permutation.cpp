//? find the permutation in which n number of people and r number of seats occupies.

#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r;
    cout << "Enter number of people (n): ";
    cin >> n;
    cout << "Enter number of seats (r): ";
    cin >> r;

    if(r > n) {
        cout << "Permutation not possible (r > n)";
    } else {
        long long result = factorial(n) / factorial(n - r);
        cout << "Permutation (nPr) = " << result;
    }
    return 0;
}