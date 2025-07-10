#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int>st;
    st.begin();
    st.end();
    --st.end();
    st.insert(6);
    st.erase(8);

    st.find(6);
    st.size();
    st.clear();
    st.empty();
    st.lower_bound(u);
    st.upper_bound(8);

    return 0;
}

