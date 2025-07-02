#include <bits/stdc++.h>
using namespace std;

int n,j,k;
vector<int> vec;

void input()
{
    cin >> n>>j>>k;
    vec.resize(n);

    for (int i = 0; i < n; i++)
       cin >> vec[i];
    
}

void solve()
{
    input();

    int maxx = *max_element(vec.begin(),vec.end());
    if(vec[j-1]==maxx)
    {
        cout<<"YES"<<endl;
        return;
    }
    else
    {
        if(k>1) cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
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