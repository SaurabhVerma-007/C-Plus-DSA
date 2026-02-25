// Majority Element using moore's voting algorithm (time complexity = O(n))
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int freq = 0, ans = 0;

    for(int i=0; i<nums.size(); i++){
        if(freq == 0){
            ans = nums[i];            
        }
        if(ans == nums[i]){
            freq++;
        } else {
            freq--;
        }
    }

    int count = 0;
    for(int val : nums){
        if(val == ans){
            count++;
        }
    }
    if(count > nums.size()/2) return ans;
    else return -1;

}
int main()
{
    vector<int> nums = {1, 2, 1, 2, 1, 1, 9, 2, 2, 2, 2};
    cout << majorityElement(nums);
};


////////////////////////////////////////////////////////////////////////////////
/* Majority Element using sorting (time complexity = O(nlogn))

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int> &nums)
{
    sort(nums.begin(), nums.end()); // sort the array
    
    //freq count
    int freq = 1;
    int ans = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1]) {
            freq++;
        } else {
            freq = 1;
            ans = nums[i];
        }
        if (freq > nums.size() / 2) {
            return ans;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 1, 2, 1, 1, 9};
    cout << majorityElement(nums);
};
*/
//////////////////////////////////////////////////////////////////////////////////////
/* Majority Element using brute force (time complexity = O(n^2))

#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    for (int val : nums)
    {
        int freq = 0;

        for (int ele : nums)
        {
            if (ele == val)
            {
                freq++;
            }
        }
        if (freq > n / 2)
        {
            return val;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 1, 1, 1, 2, 2, 9};
    cout << majorityElement(nums);
};

*/
