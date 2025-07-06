#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,l,r,k;
    cin>>n>>l>>r>>k;

    if(n%2==1 )
    {
        cout<<l<<endl;
        return;
    }
    if(n==2)
    {
        cout<<-1<<endl;
        return;
    }

    int x = 0;
    for(int i=0; i<61;i++)
        if((1LL<<i)&l)
            x=i;

    // int x = __lg(l);
    if(r>=((1LL<<(x+1))))
    {
        if(k<=(n-2))
        {
            cout<<l<<endl;
        }
        else
            cout<< ((1LL<<(x+1)))<<endl;

        return;
    }
    else
        cout<<-1<<endl;
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

