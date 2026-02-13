#include <iostream>
#include <climits> //for INT_MAX
using namespace std;

int main()
{
    int nums[] = {1, 2, 4, 5, -1, 22, 23, -11, 113};
    int size = sizeof(nums)/sizeof(int); // to find the size of nums array.

    int smallestIndex = -1; // -1 means "not found yet".
    int largestIndex = -1;

    int smallest = INT_MAX; // declairing largest possible value to compare.
    int largest = INT_MIN;  // declairing smallest possible value to compare.
    for(int i = 0; i < size; i++){
        if(nums[i] < smallest){ // when smaller than INT_MAX is found replace that number with smallest.
            smallest = nums[i];
            smallestIndex = i;
        }
        if(nums[i] > largest){ // when larger than INT_MIN is found replace that number with largest.
            largest = nums[i];
            largestIndex = i;
        }
    }
    cout << "smallest : " << smallest << " at index " << smallestIndex << endl;
    cout << "largest : " << largest << " at index " << largestIndex << endl;
    return 0;
}


// with implicit functions

// #include <iostream>
// #include <climits> //for INT_MAX
// using namespace std;

// int main()
// {
//     int nums[] = {1, 2, 4, 5};
//     int size = 4;

//     int smallest = INT_MAX; // declairing largest possible value to compare.
//     int largest = INT_MIN;  // declairing smallest possible value to compare.
//     for(int i = 0; i < size; i++){
//         smallest = min(nums[i], smallest); // when smaller than INT_MAX is found replace that number with smallest.
//         largest = max(nums[i], largest); // when larger than INT_MIN is found replace that number with largest.
//     }
//     cout << "smallest : " << smallest << endl;
//     cout << "largest : " << largest << endl;
//     return 0;
// }
