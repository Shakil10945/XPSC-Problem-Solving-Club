#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> vec;

void input()
{
    cin >> n>>m;
    vec.resize(n);

    for (int i = 0; i < n; i++)
       cin >> vec[i];
    
}

void solve()
{
    input();


    set<int>st;
    for(auto x: vec)
        st.insert(x);
    cout<<m-st.size()<<endl;
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}