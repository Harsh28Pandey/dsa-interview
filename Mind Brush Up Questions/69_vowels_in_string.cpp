//? check vowels in a string

#include <iostream>
using namespace std;

int main()
{
    string ch = "hello";
    int vowels = 0;
    for (int i = 0; i < ch.size(); i++)
    {
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')
        {
            vowels++;
        }
    }
    cout << vowels;
}