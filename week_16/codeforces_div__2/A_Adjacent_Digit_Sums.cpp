#include <bits/stdc++.h>
using namespace std;

int a,b;

void input()
{
    cin>>a>>b;
}

void solve()
{
    input();

    if(a%9 == 0 && b == 1)
        cout<<"Yes"<<endl;
    else if(a == (b-1) ||  (a == (b+8)) || (a%9==b && (a<b) ))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;   
    

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