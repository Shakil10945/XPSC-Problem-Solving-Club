#include <bits/stdc++.h>
using namespace std;

int n, x, y;
vector<int> vec;

void input()
{
    cin >> n >> x>>y;
    vec.resize(n);

    for (int i = 0; i < n; i++)
       cin >> vec[i];
    
}

void solve()
{
    input();

    int m =0;
    for(int i=0; i<n; i++)
    {
        if(vec[i]>=x && vec[i]<=y)  m++;
    }
    cout<<m<<endl;
    
    
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