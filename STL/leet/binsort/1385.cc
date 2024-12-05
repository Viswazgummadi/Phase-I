// Auto-generated file: 1385.cc

/*
Given two integer arrays arr1 and arr2, and the integer d, return the distance value between the two arrays.

The distance value is defined as the number of elements arr1[i] such that there is not any element arr2[j] where |arr1[i]-arr2[j]| <= d.



Example 1:

Input: arr1 = [4,5,8], arr2 = [10,9,1,8], d = 2
Output: 2
Explanation:
For arr1[0]=4 we have:
|4-10|=6 > d=2
|4-9|=5 > d=2
|4-1|=3 > d=2
|4-8|=4 > d=2
For arr1[1]=5 we have:
|5-10|=5 > d=2
|5-9|=4 > d=2
|5-1|=4 > d=2
|5-8|=3 > d=2
For arr1[2]=8 we have:
|8-10|=2 <= d=2
|8-9|=1 <= d=2
|8-1|=7 > d=2
|8-8|=0 <= d=2
Example 2:

Input: arr1 = [1,4,2,3], arr2 = [-4,-3,6,10,20,30], d = 3
Output: 2
Example 3:

Input: arr1 = [2,1,100,3], arr2 = [-5,-2,10,-3,7], d = 6
Output: 1


Constraints:

1 <= arr1.length, arr2.length <= 500
-1000 <= arr1[i], arr2[j] <= 1000
0 <= d <= 100

*/
#include<bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
    {
        // Sort arr2 for binary search
        sort(arr2.begin(), arr2.end());
        int distanceValue = 0;

        for (int num : arr1)
        {
            // Check if num satisfies the condition using binary search
            if (!isWithinDistance(num, arr2, d))
            {
                distanceValue++;
            }
        }

        return distanceValue;
    }

private:
    bool isWithinDistance(int num, vector<int> &arr2, int d)
    {
        int left = 0, right = arr2.size() - 1;

        // Binary search to check if there's an element in arr2
        // such that |num - arr2[j]| <= d
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (abs(num - arr2[mid]) <= d)
            {
                return true; // Found an element within distance
            }
            if (arr2[mid] < num)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        return false; // No element within distance
    }
};

int main()
{
    Solution solution;

    // Example 1
    vector<int> arr1_1 = {4, 5, 8};
    vector<int> arr2_1 = {10, 9, 1, 8};
    int d1 = 2;
    cout << "Example 1: " << solution.findTheDistanceValue(arr1_1, arr2_1, d1) << endl;

    // Example 2
    vector<int> arr1_2 = {1, 4, 2, 3};
    vector<int> arr2_2 = {-4, -3, 6, 10, 20, 30};
    int d2 = 3;
    cout << "Example 2: " << solution.findTheDistanceValue(arr1_2, arr2_2, d2) << endl;

    // Example 3
    vector<int> arr1_3 = {2, 1, 100, 3};
    vector<int> arr2_3 = {-5, -2, 10, -3, 7};
    int d3 = 6;
    cout << "Example 3: " << solution.findTheDistanceValue(arr1_3, arr2_3, d3) << endl;

    return 0;
}
