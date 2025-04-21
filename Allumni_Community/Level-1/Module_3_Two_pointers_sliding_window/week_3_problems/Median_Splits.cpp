#include <bits/stdc++.h>
using namespace std;

int n,k;
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

    int x =0;
    if(n==3)
    {
        if(vec[1]<=k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        return;
    }
    for(int i=0; i<n; i++)
    {
        if(vec[i]<=k)
            x++;
    }
    cout<<x<<endl;
    cout<<(x>=3 ? "YES": "NO")<<endl;
    
    
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