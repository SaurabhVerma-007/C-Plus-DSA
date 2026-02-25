#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int> ans(nums.size(), 1);
    int suffix=1;

    // prefix
    for (int i = 1; i < nums.size(); i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    // suffix
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }

    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);
    cout << "Product of array except self: ";
    for (int num : result)
    {
        cout << num << " ";
    }
}

/* Brute Force Approach: O(n^2) time complexity, O(n) space complexity

#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> ans(nums.size(), 1);
    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums.size(); j++){
            if(i != j){
                ans[i] *= nums[j];
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);
    cout << "Product of array except self: ";
    for(int num : result){
        cout << num << " ";
    }
}
*/