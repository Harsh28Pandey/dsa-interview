//? sorting element on the basis or frequency

#include <iostream>
#include <algorithm>
using namespace std;

struct Item
{
    int value;
    int freq;
};

bool compare(Item a, Item b)
{
    if (a.freq == b.freq)
        return a.value < b.value;
    return a.freq < b.freq;      
}

int main()
{
    int arr[] = {4, 6, 2, 6, 4, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n); 
    
    Item items[n];
    int index = 0;
    for (int i = 0; i < n;)
    {
        int count = 1;
        int value = arr[i];

        while (i + 1 < n && arr[i] == arr[i + 1])
        {
            count++;
            i++;
        }

        items[index].value = value;
        items[index].freq = count;
        index++;
        i++;
    }
    sort(items, items + index, compare);
    for (int i = 0; i < index; i++)
    {
        for (int j = 0; j < items[i].freq; j++)
        {
            cout << items[i].value << " ";
        }
    }
    return 0;
}