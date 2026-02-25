//? remove vowels in a string

#include <iostream>
using namespace std;

int main()
{
    string ch = "hello";
    string s;
    int i = 0;
    while (ch[i] != '\0')
    {
        char c = ch[i];
        // Check if character is not a vowel (both lowercase and uppercase)
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U')
        {
            s += c; // Use += operator instead of concat()
        }
        i++;
    }
    cout << s;
}