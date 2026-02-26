//? Anagram
// todo two strings having same character and same frequency of chcracter

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string ch;
    cout << "Enter the String : ";
    cin >> ch;

    string ch1;
    cout << "Enter the second string : ";
    cin >> ch1;

    sort(ch.begin(), ch.end());
    sort(ch1.begin(), ch1.end());
    if (ch == ch1) {
        cout << "Anagram";
    }
    else {
        cout << "not anagram";
    }

    return 0;
}