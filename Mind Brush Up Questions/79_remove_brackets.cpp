//? Remove brackets from the expression

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string ch;
    cout << "Enter the String : ";
    cin >> ch;

    string s;
    for (int i = 0; i < ch.size(); i++)
    {
        if (ch[i] == '(' || ch[i] == ')' || ch[i] == '{' || ch[i] == '}' || ch[i] == '[' || ch[i] == ']')
        {
            continue;
        }
        else
        {
            s += ch[i];
        }
    }

    cout << "new string : " << s;
    return 0;
}