#include <bits/stdc++.h>
using namespace std;

int n;

void input()
{
    cin>>n;
}

void solve()
{
    input();
    
    for(int i=n; i>=1; i--)
        cout<<i<<" ";
    cout<<endl;
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}