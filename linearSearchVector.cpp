#include <iostream>
#include <vector>
using namespace std;   

int linearSearch(const vector<int>& arr, int target){
    int index = 0;
    for(int value : arr){
        if(value == target){
            return index; // found
        }
        index++;         
    }
    return -1; // not found
}

int main() {
    vector<int> arr = {2, 4, 5, 6, 8, 9};

    int target = 9;

    int result = linearSearch(arr, target);

    if(result != -1){
        cout << "Element " << target << " found at index : " << result << endl;
    } else {
        cout << "Element" << target << "not found in the array." << endl;
    }

    return 0;  
}