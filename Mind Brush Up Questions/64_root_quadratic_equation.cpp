//? find the roots of quadratic equation

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the values of a, b, c: ";
    cin >> a >> b >> c;
    int d = b * b - 4 * a * c;
    if(d > 0) {
        int root1 = (-b + sqrt(d)) / (2 * a);
        int root2 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots are real and different: " << root1 << " " << root2 << endl;
    } else if(d == 0) {
        int root = -b / (2 * a);
        cout << "Roots are real and same: " << root << endl;
    } else {
        cout << "Roots are imaginary" << endl;
    }
    return 0;
}