 //SUBARRAY
/*
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    for(int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            for(int i=st; i<=end; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
*/

// Maximum sum of subarray optimized
/*
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, -2, -5};

    int maxSum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
        }
    }
    cout << maxSum;
    return 0;
}
*/

// Maximum sum of subarray using kadan's algorithm
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArray(vector<int>& nums){
        int currSum = 0;
        int maxSum = INT_MIN;

        for(int val : nums){
            currSum += val;
            maxSum = max(maxSum, currSum);

            if(currSum < 0){ //remove negative sum subarray
                currSum = 0; 
            }
        }
        return maxSum;
    }
int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, 5, 4};
    cout << maxSubArray(nums);
    return 0;
}