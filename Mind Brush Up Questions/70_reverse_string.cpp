//? reverse a string

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s = "hello";
    reverse(s.begin(), s.end());
    cout << "Reverse String: " << s << endl;
    return 0;
}