#include <iostream>
using namespace std;

int linearSerch(int arr[], int size, int target) {
    for(int i=0; i<size; i++) {
        if(arr[i] == target) { // FOUND
            return i;
        }
    }
    return -1; // NOT FOUND
}

int main() {
    int arr[] = {1, 2, 3, 6, 8, 12, 34, 54};
    int size = sizeof(arr)/sizeof(int);
    int target = 12;

    cout << linearSerch(arr, size, target) << endl;
    return 0;
}

// time complexity = O(n) because we have to traverse the whole array.