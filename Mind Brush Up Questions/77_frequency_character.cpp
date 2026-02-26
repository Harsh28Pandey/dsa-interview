//? Find the frequency of each character of a string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ch;
    cout << "Enter the String : ";
    getline(cin, ch);

    cout << "Original string : " << ch << endl;
    int freq[256] = {0};

    for (int i = 0; i < ch.size(); i++)
    {
        if (ch[i] != ' ')
        {
            freq[ch[i]]++;
        }
    }

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            cout << "Character : " << (char)i << " frequency : " << freq[i] << endl;
        }
    }
    return 0;
}