#include <bits/stdc++.h>
using namespace std;

// Define the Solution class
class Solution
{
public:
    int func(int a , int b)
    {
        return a > b;
    }
    // Method to find the insert position of a target in a sorted array
    int searchInsert(vector<int> &nums, int target)
    {
        // int n = nums.size() / sizeof(nums[0]);
        int left = 0, right = nums.size() - 1;
        int mid = 0;
        while (left<=right)
        {
            mid = left + (right-left)/2;

            if(nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return left;
        
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 5, 6};
    int target = 4;

    // Create an object of Solution class
    Solution sol;

    // Call the searchInsert method and print the result
    int result = sol.searchInsert(nums, target);
    cout << "Insert position: " << result << endl;

    return 0;
}
