//? determine the maximum number of handshakes.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of people: ";
    cin >> n;
    int handshakes = (n * (n - 1)) / 2;
    cout << "Maximum number of handshakes = " << handshakes;
    return 0;
}