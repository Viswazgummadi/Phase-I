#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> st;

    st.insert(10);
    st.insert(11);
    st.insert(12);
    st.insert(13);
    st.insert(11);

    for(auto i : st)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}