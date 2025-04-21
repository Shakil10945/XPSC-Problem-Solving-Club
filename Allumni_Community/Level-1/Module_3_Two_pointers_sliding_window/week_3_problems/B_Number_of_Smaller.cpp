#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> vec;
vector<int> vec2;

void input()
{
    cin >> n>>m;
    vec.resize(n);
    vec2.resize(m);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    for (int i = 0; i < m; i++)
        cin >> vec2[i];
    

}

void solve()
{
    input();
    
    // for(int i=0; i<m; i++)
    // {
    //     auto it = lower_bound(vec.begin(),vec.end(),vec2[i]);
    //     int idx = it-vec.begin();

    //     cout<<idx<<" ";
    // }
    // cout<<endl;    
    

    int l=0, r=0;
    while(r<m)
    {
        if(l<n && vec[l]<vec2[r])
            l++;
        else
        {
            cout<<l<<" ";
            r++;
        }
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