#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin>>n;
    vec.resize(n,0);

    for(int i=0; i<n; i++)  cin>>vec[i];
}

void solve()
{
    input();

    int xorr = 0;
    for(int i=0; i<n; i++)
    {
        xorr = xorr^vec[i];
    }

    int minx = xorr;

    for(int i=0; i<n; i++)
    {
        minx = min(minx, xorr^vec[i]);
    }
    cout<<minx<<endl;
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
