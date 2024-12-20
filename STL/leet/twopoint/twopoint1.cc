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

    int cnt0 = 0;
    // we assume head <= tail - 1
    // iterate till end // tail is at end
    while(tail<n)
    {
        // for each tail check and eat max with head
        // availalble for eating, next ele = arr[head+1] ,can eat only if non 0
        // if total 0's <=k can take else we shld stop
        while(head+1<n && cnt0+(1-arr[head+1])<=k)
        {
            // if we can take
            head++;
            cnt0 += (1 - arr[head]);
        }
        ans = max(ans, head - tail + 1);
        // now we move tail
        // when? when only theres atleast one element
        // head-tail>=0
        if(head>=tail)
        {
            cnt0 -= (1 - arr[tail]);
            tail++;
        }
        else
        // we skip element itself when it cannot be taken
        // moving my empty window
        {
            tail++;
            head = tail - 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
