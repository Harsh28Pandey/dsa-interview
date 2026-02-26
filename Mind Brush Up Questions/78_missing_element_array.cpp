//? missing element of the array...

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    int esum = 0;
    for (int j = 1; j <= n + 1; j++)
    {
        esum = esum + j;
    }
    cout << "Missing number : " << esum - sum;
    return 0;
}