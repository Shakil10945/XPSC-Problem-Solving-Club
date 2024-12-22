#include <bits/stdc++.h>
using namespace std;

int n, a,b,c;

void input()
{
    cin>>n>>a>>b>>c;
}

void solve()
{
    input();

    int total = a+b+c;

    int comp = (n/total)*3;
    int rem = n%total;

    if(rem == 0)
    {
        cout<<comp<<endl;
        return;
    }

    if(rem-a<=0)    cout<<comp+1<<endl;
    else if(rem-(a+b)<=0)   cout<<comp+2<<endl;
    else                    cout<<comp+3<<endl;    
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
