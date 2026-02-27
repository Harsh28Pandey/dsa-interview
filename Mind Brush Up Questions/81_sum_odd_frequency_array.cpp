//? sum of all odd frequency element in array

#include <iostream>
#include <algorithm>
using namespace std;

int sumOddFrequency(int arr[], int n) {
    sort(arr, arr + n);

    int sum = 0;
    int i = 0;

    while(i < n) {
        int count = 1;
        while(i + 1 < n && arr[i] == arr[i + 1]) {
            count++;
            i++;
        }
        if(count % 2 != 0) {
            sum += arr[i];
        }
        i++;
    }

    return sum;
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of elements with odd frequency: " << sumOddFrequency(arr, n);
    return 0;
}