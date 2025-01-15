#include <bits/stdc++.h>
using namespace std;

int n, m, o;

void input()
{
    cin>>n>>m>>o;
}

void solve()
{
    input();
    if(abs(m-o) %2 == 0)    cout<<"YES"<<endl;
    else                    cout<<"NO"<<endl;

    
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
