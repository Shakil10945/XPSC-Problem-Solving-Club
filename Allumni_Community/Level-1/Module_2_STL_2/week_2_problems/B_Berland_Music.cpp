#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;
string str;

void input()
{
    cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    cin>>str;
    
}

void solve()
{
    input();
    
    set<int> dslk, lk;
    map<int,int> mp;

    for(int i=0; i<n; i++)
    {
        if(str[i] == '0')
            dslk.insert(vec[i]);
        else
            lk.insert(vec[i]);
    }
    int f =1;
    for(auto d: dslk)
    {
        mp[d] = f;
        f++;
    }
    for(auto d: lk)
    {
        mp[d] = f;
        f++;
    }

    for(int i=0; i<n; i++)
    {
        cout<< mp[vec[i]]<< " ";
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