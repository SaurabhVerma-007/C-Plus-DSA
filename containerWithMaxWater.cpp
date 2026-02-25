#include <iostream>
#include <vector>
using namespace std;

int mostWater(vector<int> &heights)
{
    int left = 0, right = heights.size() - 1;
    int maxWater = 0;

    while (left < right)
    {
        int w = right - left; // Calculate the width between the two lines
        int ht = min(heights[left], heights[right]); // The height of the water is limited by the shorter line
        int currWater = w * ht; 
        maxWater = max(maxWater, currWater); // Update maxWater if the current water is greater

        heights[left] < heights[right] ? left++ : right--; // Move the pointer of the shorter line inward 
    }
    return maxWater;
}

int main()
{
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Maximum water: " << mostWater(heights) << endl;
    return 0;
}

/* Container With Most Water (brute force approach) (time complexity = O(n^2))

#include <iostream>
#include <vector>
using namespace std;

int mostWater(vector<int>& heights)
{
    int maxWater = 0;
    int n = heights.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int w = j - i;
            int ht = min(heights[i], heights[j]);
            int currWater = w * ht;
            maxWater = max(maxWater, currWater);
        }
    }
    return maxWater;
}

int main()
{
    vector<int> heights = {7, 1, 5, 3, 6, 4};
    cout << "Maximum water: " << mostWater(heights) << endl;
    return 0;
}
*/
