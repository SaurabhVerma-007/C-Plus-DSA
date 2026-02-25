// pair sum using brute force (time complexity = O(n^2))
/*
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(const vector<int> &nums, int target)
{
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 4, 5, 6, 8, 9};
    int target = 17;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << ", " << ans[1] << endl;

    return 0;
}
*/

// using two pointer approach (time complexity = O(n))
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(const vector<int> &nums, int target)
{
    vector<int> ans;
    int start = 0;
    int end = nums.size() - 1;

    while (start < end)
    {
        int sum = nums[start] + nums[end];
        if (sum > target)
        {
            end--;
        }
        else if (sum < target)
        {
            start++;
        }
        else
        {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
    }
}

int main()
{
    vector<int> nums = {2, 4, 5, 6, 8, 9};
    int target = 17;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << ", " << ans[1] << endl;

    return 0;
}