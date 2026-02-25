//? sort string alphabatically order

#include <iostream>
using namespace std;

int main()
{
    string ch = "dcba";
    cout << "original string : " << ch << endl;
    for (int i = 0; i < ch.size(); i++)
    {
        for (int j = 0; j < ch.size() - 1; j++)
        {
            if (ch[j] > ch[j + 1])
            {
                char temp = ch[j];
                ch[j] = ch[j + 1];
                ch[j + 1] = temp;
            }
        }
    }

    cout << "Ascending Sort String : " << ch;
}