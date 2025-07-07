#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> vec;

void input()
{
    cin >> n>>k;
    vec.resize(n);

    for (int i = 0; i < n; i++)
       cin >> vec[i];
    
}

void solve()
{
    input();

    if(k==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    bool ch = true;
    for(int i=0, j=n-1; i<j; i++, j--)
    {
        if(vec[i] != vec[j])
        {
            ch = false;
            break;
        }
    }
    if(ch)
    {
        cout<<"YES"<<endl;
        return;
    }


    multiset<int>ms;
    for(int i=0; i<n; i++)
    {
        ms.insert(vec[i]);
    }

    int x = n-k+1;
    while(x--)
    {
        ms.erase(--ms.end());
    }

    set<int>s(ms.begin(),ms.end());
    map<int,set<int>>mp;
    for(int i=0; i<n; i++)
        mp[i].insert(i);

    for(auto x: ms)
    {
        if(k-1%2==1 && )
    }
    



    
    
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