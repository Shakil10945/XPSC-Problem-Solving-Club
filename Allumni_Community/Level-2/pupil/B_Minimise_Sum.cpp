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

    if(n==2)
    {
        cout<<(vec[0]<vec[1]? vec[0]*2: vec[1]+vec[0])<<endl;
        return;
    }
    if(vec[0]>=vec[1])
    {
        cout<<vec[0]+vec[1]<<endl;
        return;
    }

    if(vec[0]<=(vec[1]+vec[2]))
    {
        cout<<vec[0]*2<<endl;
        return;
    }


    
    vector<int>pref(n);
    set<int>s;
    for(int i=0; i<n; i++)
    {
        s.insert(vec[i]);
        pref[i] = (*s.begin());
    }

    long long ans = 0;
    for(auto x: pref)
    {
        ans+=x;
    }
    cout<<ans<<endl;

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