#include <bits/stdc++.h>
using namespace std;

int a,b,c;

void input()
{
    cin>>a>>b>>c;
}

void solve()
{
    input();

    cout<<(1000)/((2)*(a*b + b*c + c*a))<<endl;

    
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
