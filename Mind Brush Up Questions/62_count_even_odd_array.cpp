//? count the even and odd elements in array

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
    int even = 0, odd = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    cout << "Even elements in array is: " << even << endl;
    cout << "Odd elements in array is: " << odd << endl;
    return 0;
}