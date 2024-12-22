#include <bits/stdc++.h>
using namespace std;

int n,m;

void input()
{
    cin>>n>>m;
}

void solve()
{
    input();

    if(n>m)
    {
        cout<<"NO"<<endl;
        return;
    }

    if(m%2 != 0 && n%2==0)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    if(n%2!=0)
    {
        for(int i=1; i<=n-1; i++)
        {
            cout<<1<<" ";
            m--;
        }
        cout<<m<<endl;
    }
    else
    {
        for(int i=1; i<=n-2; i++)
        {
            cout<<1<<" ";
            m--;
        }
        cout<<m/2<< " "<<m/2<<endl;
    }    
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
