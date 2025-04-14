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
    
    long long x = accumulate(vec.begin(),vec.end(), 0LL);

    long long xroot = sqrt(x) +1;

    for(long long i=1; i<=xroot; i++)
    {
        if(i*i == x)
        {
            cout<<"YES"<<endl; return;
        }
    }
    cout<<"NO"<<endl;
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