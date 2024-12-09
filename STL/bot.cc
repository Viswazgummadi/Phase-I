#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec(10, 0);

    for(int i:vec)
    {
        cout << i << " ";
    }

    cout << endl;

    cout << vec.at(11);
    return 0;
}