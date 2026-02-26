//? replace the substring of the string

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string ch;
    cout << "Enter the String : ";
    getline(cin, ch);

    string ch1;
    cout << "Enter the replace string : ";
    cin >> ch1;

    string newstring;
    cout << "Enter the new string : ";
    cin >> newstring;

    size_t pos = ch.find(ch1);
    if (pos != string::npos)
    {
        ch.replace(pos, ch1.length(), newstring);
    }
    cout << "Result: " << ch << endl;
    return 0;
}