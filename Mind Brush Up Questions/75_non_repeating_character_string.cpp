//? non repeating char in a string

#include <iostream>
using namespace std;

int main() {
    string str = "aabbcddee";
    int freq[256] = {0};   // ASCII support

    // Step 1: Count frequency
    for (char ch : str) {
        freq[ch]++;
    }

    // Step 2: Find first non-repeating
    for (char ch : str) {
        if (freq[ch] == 1) {
            cout << "First non-repeating character: " << ch;
            return 0;
        }
    }

    cout << "No non-repeating character found";
    return 0;
}