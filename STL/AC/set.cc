#include <bits/stdc++.h>
using namespace std;

/*

Insertion of Elements – O(log N)
Deletion of Elements – O(log N)

*/
int main() {
    set<int> k;
    k.insert(10);
    k.erase(10);
    k.insert(19);
    k.erase(10);

    for( auto i: k)
    {
        cout << i << endl;
    }
    return 0;
}