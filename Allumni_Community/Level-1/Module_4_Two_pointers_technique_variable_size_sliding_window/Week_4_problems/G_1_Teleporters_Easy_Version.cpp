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

    vector<int>vec2;
    for(int i=0;i<n; i++)
    {
        vec[i] = vec[i] + i+1;
    }

    sort(vec.begin(),vec.end());

    int l =0;
    for(int i=0;i<n;i++)
    {
        m-=vec[i];
        if(m<0) break;
        l++;
    }
    cout<<l<<endl;
    
    
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