//? rearrange +ve and -ve number in an array

#include <iostream>
using namespace std;

void rearrange(int arr[], int n) {
    int temp[n];
    int pos = 0, neg = 0;
    int positive[n], negative[n];
    int p = 0, q = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] >= 0)
            positive[p++] = arr[i];
        else
            negative[q++] = arr[i];
    }

    int i = 0, j = 0, k = 0;
    while(i < p && j < q) {
        temp[k++] = positive[i++];
        temp[k++] = negative[j++];
    }
    while(i < p)
        temp[k++] = positive[i++];

    while(j < q)
        temp[k++] = negative[j++];
    for(int i = 0; i < n; i++)
        arr[i] = temp[i];
}

int main() {
    int arr[] = {1, 2, 3, -4, -1, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    rearrange(arr, n);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}