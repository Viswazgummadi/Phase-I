#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxCount(vector<int> &banned, int n, int maxSum)
    {
        vector<int> arr(n + 1, 0); // 0 to n
        int m = banned.size();
        for (int i = 0; i < m; i++)
        {
            if (banned[i] <= n)
            {
                arr[banned[i]] = 1;
            }
        }
        int sum = 0;
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == 0 && sum +i <= maxSum)
            {
                sum += i;
                ans++;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> banned = {1,5,6};
    int maxSum = 6;
    int n = 5;
    Solution sol;
    int ans = sol.maxCount(banned, n, maxSum);
    cout << "Maximum count: " << ans << endl;
    return 0;
}