//? number of days in a month of the given year...

#include <iostream>
using namespace std;

int notleap[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int leap[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main()
{
    int m;
    cout << "Enter month number : ";
    cin >> m;
    int y;
    cout << "Enter the year  ";
    cin >> y;

    if (y % 4 == 0 && y % 400 == 0 || y % 100 != 0)
    {
        cout << "number of days : " << notleap[m - 1];
    }

    else
    {
        cout << "number of days : " << leap[m - 1];
    }
}