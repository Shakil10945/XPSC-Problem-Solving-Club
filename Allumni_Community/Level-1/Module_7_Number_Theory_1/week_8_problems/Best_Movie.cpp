#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<int,int>> vec;

void input()
{
    cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i].first>>vec[i].second;
    
}

void solve()
{
    input();

    set<int>st;

    for(int i=0; i<n;i++)
    {
        if(vec[i].first>=7)
            st.insert(vec[i].second);
    }
    if(st.size())
        cout<<*st.begin()<<endl;
    else
        cout<<-1<<endl;
    

    
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