//? Number that gave exactly 9 divisors ...

#include <iostream>
#include <cmath>

using namespace std;

int Divisors(int n)
{
    int count = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i == n)
            {

                count++;
            }
            else
            {
                count += 2;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the range: ";
    cin >> n;

    cout << "Numbers that have exactly 9 divisors: " << endl;
    for (int i = 1; i <= n; i++)
    {
        if (Divisors(i) == 9)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}