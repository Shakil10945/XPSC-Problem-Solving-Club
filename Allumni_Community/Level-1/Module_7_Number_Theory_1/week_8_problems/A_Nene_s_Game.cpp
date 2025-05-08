#include <bits/stdc++.h>
using namespace std;

int n,q;
vector<int> vec;
vector<int>qq;

void input()
{
    cin >> n>>q;
    vec.resize(n);
    qq.resize(q);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    for(int i=0; i<q; i++)
        cin>>qq[i];
    
}

void solve()
{
    input();

    for(int i=0; i<q; i++)
    {
        cout<<min(qq[i], vec[0]-1)<<" ";
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