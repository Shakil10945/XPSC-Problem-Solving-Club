#include <bits/stdc++.h>
using namespace std;

int n,m;
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

    int l=0, r=0;
    while (l<n || r<m)
    {
        if(l== n)
        {
            cout<<vec2[r]<<" ";
            r++;
            continue;
        }
        if(r==m)
        {
            cout<<vec[l]<< " ";
            l++;
            continue;
        }
        cout<<min(vec[l], vec2[r])<<" ";
        if(vec[l]<=vec2[r])  l++;
        else                r++;
    }
    cout<<endl;
    
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //int t;
    //cin >> t;
    //while (t--)
        solve();

    return 0;
}