//? perform basic string operations.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello";
    cout << "Length: " << str.length() << endl;

    string str2 = " World";
    string result = str + str2;
    cout << "Concatenation: " << result << endl;

    cout << "First character: " << str[0] << endl;

    str.append(" Everyone");
    cout << "After append: " << str << endl;

    string a = "ABC";
    string b = "XYZ";
    if(a == b)
        cout << "Strings are equal\n";
    else
        cout << "Strings are not equal\n";

    cout << "Substring: " << result.substr(0,5) << endl;

    cout << "Position of World: " << result.find("World") << endl;

    result.erase(5,6);
    cout << "After erase: " << result << endl;

    return 0;
}
