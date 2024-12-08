#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    vector<int>::iterator it = arr.begin();
    vector<int>::iterator last =
        arr.end();
    while (it != last)
    {
        cout << *it << endl;
        it++;
    }
    return 0;
}