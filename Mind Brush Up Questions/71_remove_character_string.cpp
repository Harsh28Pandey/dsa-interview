//? remove character in a string except alphabets

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str = "He110 W@rld_2026!";
    string result = "";

    for (char ch : str) {
        if (isalpha(ch)) {
            result += ch;
        }
    }
    cout << "Output: " << result;
    return 0;
}