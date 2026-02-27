//? sort an array order defined by another array

#include <iostream>
#include <algorithm>
using namespace std;

void relativeSort(int arr1[], int n, int arr2[], int m)
{
    sort(arr1, arr1 + n);
    bool visited[n] = {false};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[j] == arr2[i] && !visited[j])
            {
                cout << arr1[j] << " ";
                visited[j] = true;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            cout << arr1[i] << " ";
        }
    }
}

int main()
{
    int arr1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    int arr2[] = {2, 1, 8, 3};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    relativeSort(arr1, n, arr2, m);
    return 0;
}