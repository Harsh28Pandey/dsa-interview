//? check the array is disjoint or not

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int m;
    cout << "Enter the size of second array: ";
    cin >> m;
    int arr2[m];
    cout << "Enter the second array elements: ";
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    int flag = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr[i] == arr2[j]) {
                flag = 1;
                break;
            }
        }
    }
    if(flag == 1) {
        cout << "Array is not disjoint" << endl;
    } else {
        cout << "Array is disjoint" << endl;
    }
    return 0;
}