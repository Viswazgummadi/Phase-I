#include <iostream>
using namespace std;

// Define the Solution class
class Solution
{
public:
    int mySqrt(int x)
    {
        if (x < 2)
            return x; // Handle edge cases for 0 and 1

        int left = 1, right = x / 2; // Start search between 1 and x/2
        int result = 0;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            // Check if mid * mid <= x to avoid overflow
            if ((long long)mid * mid <= x)
            {
                result = mid;   // mid could be the answer
                left = mid + 1; // Search the right half
            }
            else
            {
                right = mid - 1; // Search the left half
            }
        }

        // To handle normal rounding, compare the square of `result + 1` with x
        if ((long long)(result + 1) * (result + 1) <= x + (2 * result + 1))
            return result + 1; // Round up if closer to (result + 1)

        return result; // Otherwise, return result
    }
};

int main()
{
    // Input value
    int x;
    cout << "Enter a non-negative integer: ";
    cin >> x;

    // Create an object of Solution class
    Solution sol;

    // Call the mySqrt method and print the result
    int result = sol.mySqrt(x);
    cout << "The square root of " << x << " rounded normally is: " << result << endl;

    return 0;
}
