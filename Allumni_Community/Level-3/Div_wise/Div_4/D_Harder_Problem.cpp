#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

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
    
    set<int> s, un_s;
    for(int i=1; i<=n; i++)
        un_s.insert(i);
    for(auto x: vec)
    {
        s.insert(x);
        if(un_s.count(x))
            un_s.erase(x);
    }

    set<int> ans;
    for(int i=0; i<n; i++)
    {
        if(!ans.count(vec[i]))
            cout<<vec[i]<<" ";
        else
        {
            cout<<*un_s.begin()<<" ";
            un_s.erase(un_s.begin());
        }
        ans.insert(vec[i]);
    }
    cout<<endl;
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