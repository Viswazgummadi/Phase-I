// Auto-generated file: twopoint1.cc
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    // Input the binary sequence
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;
    int head = -1;
    int tail = 0;
    // we assume head <= tail - 1
    // Iterate over every starting position
    for (int i = 0; i < n; i++)
    {


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
