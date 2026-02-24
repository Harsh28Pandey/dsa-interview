//? find the array type

#include <iostream>
using namespace std;

int main() {
    int arr[10];

    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Array size: " << size;
}