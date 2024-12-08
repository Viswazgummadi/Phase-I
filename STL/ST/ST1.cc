#include <bits/stdc++.h>
// #include <stdio.h>
using namespace std;

int arr[100100];
int t[400400];

void build(int index, int l, int r)
{
    if(l==r)
    {
        t[index] = arr[l];
    }
    //inorder traversal
    int mid = (l + r) / 2;
    build(index * 2, l, mid);
    build(index * 2+1, mid, r);
    t[index] = t[2 * index] + t[2 * index + 1];

}

void update(int index, int l, int r, int pos, int val)
{
    if(pos<l || pos > r)
        return;
    if(l==r)
    {
        t[index] = val;
        arr[l] = val;
        return;
    }
}

int query(int index, int left,int right, int l, int r)
{

}
void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n;i++)
    {
        cin >> arr[n];
    }
    build(1, 0, n - 1);

    // queries

    int q;
    cin >> q;
    for (int i = 0; i < q;i++)
    {
        int ch;
        cin >> ch;
        if(ch==1)
        {
            int x, v;
            cin >> x >> v;
            update(1, 0, n - 1,x,v); // update val x with v
        }
        else
        {
            int l, r;
            cin >> l >> r;
            query(1, 0, n - 1, l, r);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 0;
}