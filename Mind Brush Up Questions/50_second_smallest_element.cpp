//? find the second smallest element in array without sorting.

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    if(n < 2) {
        cout << "Second smallest not possible";
        return 0;
    }

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    if(secondSmallest == INT_MAX)
        cout << "No distinct second smallest element";
    else
        cout << "Second smallest element = " << secondSmallest;

    return 0;
}