// Auto-generated file: 154.cc
#include<bits/stdc++.h>
/*
Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,4,4,5,6,7] might become:

[4,5,6,7,0,1,4] if it was rotated 4 times.
[0,1,4,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

Given the sorted rotated array nums that may contain duplicates, return the minimum element of this array.

You must decrease the overall operation steps as much as possible.



Example 1:

Input: nums = [1,3,5]
Output: 1
Example 2:

Input: nums = [2,2,2,0,1]
Output: 0


Constraints:

n == nums.length
1 <= n <= 5000
-5000 <= nums[i] <= 5000
nums is sorted and rotated between 1 and n times.


Follow up: This problem is similar to Find Minimum in Rotated Sorted Array, but nums may contain duplicates. Would this affect the runtime complexity? How and why?
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int left = 0, right = nums.size() - 1;

        while (left < right)
        {
            int mid = left + (right - left) / 2;

            // If the middle element is greater than the rightmost element,
            // the minimum must be in the right half of the array.
            if (nums[mid] > nums[right])
            {
                left = mid + 1;
            }
            // If the middle element is less than or equal to the rightmost element,
            // the minimum is in the left half (including mid).
            else
            {
                right = mid;
            }
        }

        // At the end of the loop, `left` and `right` will converge to the minimum element.
        return nums[left];
    }
};

int main()
{
    Solution solution;

    // Example 1
    vector<int> nums1 = {3, 4, 5, 1, 2};
    cout << "Example 1: Minimum element is " << solution.findMin(nums1) << endl;

    // Example 2
    vector<int> nums2 = {4, 5, 6, 7, 0, 1, 2};
    cout << "Example 2: Minimum element is " << solution.findMin(nums2) << endl;

    // Example 3
    vector<int> nums3 = {11, 13, 15, 17};
    cout << "Example 3: Minimum element is " << solution.findMin(nums3) << endl;

    // Example 4
    vector<int> nums4 = {2, 1};
    cout << "Example 4: Minimum element is " << solution.findMin(nums4) << endl;

    return 0;
}
