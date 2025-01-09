#include <bits/stdc++.h>
using namespace std;

int n;
string vec, vecb;


void input()
{
    cin>>n;
    cin>>vec>>vecb;
}

void solve()
{
    input();

    int x = 0;
    int zero = 0;
    for(int i=0; i<n; i++)
    {
        if(vec[i] == '1' || vecb[i] == '1')         x++;
        if((vec[i] == '1' && vecb[i] == '0') || (vec[i] == '0' && vecb[i] == '1'))         zero++;
    }

    if(x%2!=0)
    {
        cout<<"YES"<<endl;
        return;
    }
    else
    {
        if(zero && x!=0)    cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
