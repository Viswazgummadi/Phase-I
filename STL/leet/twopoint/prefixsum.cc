// Auto-generated file: prefixsum.cc
#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    vector<int> prefix(n, 0); // Prefix sum to count zeros

    // Input the binary sequence
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        prefix[i] = 1 - arr[i]; // Convert 0 to 1, 1 to 0 for zero-counting
        if (i > 0)
        {
            prefix[i] += prefix[i - 1]; // Cumulative sum
        }
    }

    int ans = 0;

    // Iterate over every starting position
    for (int i = 0; i < n; i++)
    {
        // Use binary search to find the farthest valid position
        int max_zeros = (i > 0 ? prefix[i - 1] + k : k);
        auto it = upper_bound(prefix.begin() + i, prefix.end(), max_zeros);
        int j = it - prefix.begin(); // Convert iterator to index

        // Update the maximum length of the subsequence
        ans = max(ans, j - i);
    }

    // Output the result
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

