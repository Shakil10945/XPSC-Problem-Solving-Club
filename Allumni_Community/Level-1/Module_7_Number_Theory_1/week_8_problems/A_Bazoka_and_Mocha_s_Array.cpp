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
    int r=1;
    while (r<n && vec[r]>=vec[r-1])
    {
        r++;
    }
    if(r!=n && vec[r]>vec[0])
    {
        cout<<"No"<<endl;
        return;
    }
    r++;
    while (r<n && vec[r]<=vec[0] && vec[r]>=vec[r-1])
    {
        r++;
    }
    if(r<n)
    {
        cout<<"No"<<endl;
    }
    else
        cout<<"Yes"<<endl;
    
    
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