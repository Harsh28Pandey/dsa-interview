//? count the sum of numbers in a string

#include <iostream>
using namespace std;

int main() {
    string str = "a1b2c3";
    int sum = 0;

    for(char ch : str) {
        if(isdigit(ch)) {
            sum += ch - '0';
        }
    }
    cout << "Sum: " << sum;
    return 0;
}