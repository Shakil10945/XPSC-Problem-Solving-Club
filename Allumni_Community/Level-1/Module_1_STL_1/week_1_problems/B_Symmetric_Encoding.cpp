#include <bits/stdc++.h>
using namespace std;

int n;
vector<char> vec;
set<char> myset;

void input()
{
    cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
        myset.insert(vec[i]);
    }
    
}

void solve()
{
    input();

    deque<char>dq;
    for(auto x: myset)
        dq.push_back(x);
    
    map<char,char>mymap;
    while (!dq.empty())
    {
        mymap[dq.front()] = dq.back();
        mymap[dq.back()] = dq.front();

        if(!dq.empty())     dq.pop_front();
        if(!dq.empty())     dq.pop_back();
    }

    for(int i=0; i<n; i++)
        cout<<mymap[vec[i]];

    cout<<endl;
    myset.clear();
    
    
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