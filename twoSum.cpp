#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(const vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return {i, j};
            }
        }
    }
    return {}; // not found
}

int main()
{
    vector<int> arr = {2, 4, 5, 6, 8, 9};

    int target = 6;

    vector<int> result = twoSum(arr, target);

    if (!result.empty())
    {
        cout << "Indices: " << result[0] << " " << result[1];
    }
    else
    {
        cout << "No pair found";
    }

    return 0;
}