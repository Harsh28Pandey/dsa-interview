//? check two array are same or not...

#include <iostream>
using namespace std;

void checkarray(int arr[], int arr1[], int n, int m)
{
    bool res = true;
    if (n != m)
    {
        cout << "Array are not equal";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr1[i])
            {
                res = false;
                break;
            }
        }
        if (res == false)
        {
            cout << "Array are not same";
        }
        else
        {
            cout << "both the array are same.";
        }
    }
}

int main()
{
    int n, m;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the size of Second array : ";
    cin >> m;
    int arr1[m];
    cout << "enter the elements in first array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the elements in second array" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }

    checkarray(arr, arr1, n, m);
    return 0;
}