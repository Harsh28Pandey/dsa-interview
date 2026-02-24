//? Number of times 3 occurs from 0 to n...

#include <iostream>
using namespace std;

int digit(int n)
{
    int count = 0;
    while (n > 0)
    {
        int rem = n % 10;
        n = n / 10;
        if (rem == 3)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the range : ";
    cin >> n;

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = digit(i);
        result += sum;
    }

    cout << "Number of three : " << result;

    return 0;
}