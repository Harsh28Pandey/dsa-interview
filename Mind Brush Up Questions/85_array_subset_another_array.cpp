//? an array is subset of another array or not

#include <iostream>
#include <algorithm>
using namespace std;

bool isSubset(int arr1[], int n, int arr2[], int m) {
    if(m > n)
        return false;

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    
    int i = 0, j = 0;
    while(i < n && j < m) {
        if(arr1[i] < arr2[j])
            i++;
        else if(arr1[i] == arr2[j]) {
            i++;
            j++;
        }
        else
            return false;
    }
    return (j == m);
}

int main() {
    int arr1[] = {11, 1, 13, 21, 3, 7};
    int arr2[] = {11, 3, 7, 1};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    if(isSubset(arr1, n, arr2, m))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}