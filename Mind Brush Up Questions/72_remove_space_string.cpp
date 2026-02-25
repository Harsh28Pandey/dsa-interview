//? remove space from a string

#include <iostream>
using namespace std;

int main() {
    string str = "Hello World From C++";
    string result = "";

    for(char ch : str) {
        if(ch != ' ') {
            result += ch;
        }
    }
    cout << "Output: " << result;
    return 0;
}