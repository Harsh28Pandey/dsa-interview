//? check string is a palindrome or not

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string ch = "hello";
    string s = ch;
    reverse(s.begin(), s.end());
    // cout << "Original: " << ch << endl;
    // cout << "Reversed: " << s << endl;

    if (ch == s)
    {
        cout << "palindrome string ";
    }
    else
    {
        cout << "Not palindrome";
    }
}