// Auto-generated file: twopoint2.cc
#include <bits/stdc++.h>
/*
max length of substring that have <=k distinct numbers
*/
using namespace std;

int freq[100100];
int counter;

int insert(int n)
{
    freq[n]++;
    if (freq[n] == 1)
    {
        counter++;
    }
}

int remove(int n)
{
    freq[n]--;
    if (freq[n] == 0)
    {
        counter--;
    }
}

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
    // iterate till end // tail is at end
    while (tail < n)
    {
        // for each tail check and eat max with head
        // availalble for eating, coutner < k , the next element should be a new distinct element
        // there is next element and
        // after taking next element counter <= k , for that
        // count<k and uniq can be taken || count <= k and similar can be taken
        while (head + 1 < n && ((counter < k && freq[arr[head + 1]] == 0) || (counter <= k && freq[arr[head + 1]] > 0)))
        {
            // if we can take
            head++;
            insert(arr[head]);

        }
        ans = max(ans, head - tail + 1);
        // now we move tail
        // when? when only theres atleast one element
        // head-tail>=0
        if (head >= tail)
        {
            remove(arr[tail]);
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
