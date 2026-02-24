//? coordinates lies in which quadrant.

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter x and y coordinates: ";
    cin >> x >> y;

    if(x > 0 && y > 0)
        cout << "Point lies in 1st Quadrant";
    else if(x < 0 && y > 0)
        cout << "Point lies in 2nd Quadrant";
    else if(x < 0 && y < 0)
        cout << "Point lies in 3rd Quadrant";
    else if(x > 0 && y < 0)
        cout << "Point lies in 4th Quadrant";
    else if(x == 0 && y != 0)
        cout << "Point lies on Y-axis";
    else if(y == 0 && x != 0)
        cout << "Point lies on X-axis";
    else
        cout << "Point is at Origin";

    return 0;
}