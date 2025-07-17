#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> p;
vector<int> s;

void input()
{
    cin >> n;
    p.resize(n);
    s.resize(n);

    for (int i = 0; i < n; i++)
       cin >> p[i];
    for (int i = 0; i < n; i++)
       cin >> s[i];
    
}

void solve()
{
    input();

    int x = 0;
    for(int i=0; i<n;i++)
    {
        x = __gcd(x, p[i]);
    }
    for(int i=0; i<n;i++)
    {
        x = __gcd(x, s[i]);
    }

    int d = count(p.begin(),p.end(), 1);
    int dd = count(s.begin(),s.end(), 1);
    if(dd+d == n+n)
    {
        cout<<"YES"<<endl;
        return;
    }   
    
    if(p[n-1]!=s[0])
    {
        cout<<"NO"<<endl;
        return;
    }

    if(x == 1)
    {
        cout<<"NO"<<endl;
        return;
    }

    for(int i=1; i<n; i++)
    {
        if(p[i]>p[i-1] && p[i]<x)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    for(int i=1; i<n; i++)
    {
        if(s[i]<s[i-1] && s[i]<x)
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    int mx = n/2;

    while(mx<n)
    {
        if(p[mx]!=p[n/2])
        {
            cout<<"NO"<<endl;
            return;

        }
    }
    mx = n/2;
    int xxx = 0;
    while(xxx<mx)
    {
        if(s[xxx]!=s[n/2])
        {
            cout<<"NO"<<endl;
            return;

        }
    }
    




    cout<<"YES"<<endl;


    
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