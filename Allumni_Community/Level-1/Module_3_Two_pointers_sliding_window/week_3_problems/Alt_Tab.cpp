#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> vec;

void input()
{
    cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();
    reverse(vec.begin(),vec.end());

    set<string>mset;

    for(auto x: vec)
    {
        if(mset.count(x))   continue;
        cout<<x.substr(x.size()-2);
        mset.insert(x);
    }
    cout<<endl;
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    //cin >> t;
    //while (t--)
        solve();

    return 0;
}