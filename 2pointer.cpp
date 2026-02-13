#include <iostream>
using namespace std;

// 2 pointer approach
void reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;

    // while(start < end) {    // without inbuilt function
    //     int temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;
    //     start++;
    //     end--;
    // }

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {2, 3, 4, 5, 7, 1, 6};
    int size = sizeof(arr) / sizeof(int);

    reverseArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}