//? capatilize the first and last letter of each word of  a string

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str = "hello world from cpp";

    int n = str.length();

    for (int i = 0; i < n; i++) {

        // Check if it's start of word
        if (i == 0 || str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }

        // Check if it's end of word
        if ((i == n - 1 || str[i + 1] == ' ') && str[i] != ' ') {
            str[i] = toupper(str[i]);
        }
    }

    cout << "Output: " << str;

    return 0;
}