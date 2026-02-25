//? Toggle each character

#include <iostream>
using namespace std;

int main()
{
    string ch = "dcba";
    cout << "original string : " << ch << endl;
    for (int i = 0; i < ch.size(); i++)
    {
        if ((int)ch[i] > 96)
        {
            ch[i] -= 32;
        }
        else
        {
            ch[i] += 32;
        }
    }
    cout << ch;
}