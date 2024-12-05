// Auto-generated file: 4.cc
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int m = nums1.size();
        int n = nums2.size();

        if(m>n) swap(nums1, nums2);

        // as nums1 is smaller we operate on it
        
        // Implement the logic here to find the median of two sorted arrays

        // we work on no of numbers instead of numbers
        // m and n

        return 0.0; // Placeholder return
    }
};

int main()
{
    // Input arrays
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    // Create an object of Solution class
    Solution sol;

    // Call the findMedianSortedArrays method and print the result
    double median = sol.findMedianSortedArrays(nums1, nums2);
    cout << "The median of the two sorted arrays is: " << median << endl;

    return 0;
}
