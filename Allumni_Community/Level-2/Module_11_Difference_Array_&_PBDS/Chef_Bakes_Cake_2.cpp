#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;
vector<int> vec2;

void input()
{
    cin >> n;
    vec.resize(n);
    vec2.resize(n);

    for (int i = 0; i < n; i++)
       cin >> vec[i];
    for (int i = 0; i < n; i++)
       cin >> vec2[i];
    
}

void solve()
{
    input();

    long long ans = 0;
    for(int i=0; i<n; i++)
    {
        ans+=(vec2[i]<vec[i]? vec[i]-vec2[i]: 0);
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