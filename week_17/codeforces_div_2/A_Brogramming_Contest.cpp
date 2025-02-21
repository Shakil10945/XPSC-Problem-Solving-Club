#include <bits/stdc++.h>
using namespace std;

int n;
string str;

void input()
{
    cin >> n;
    cin>>str;
}

void solve()
{
    input();
    
    if(str[0] == '1' && str[n-1] == '1')
    {
        if (count(str.begin(), str.end(), '0') > 0) 
        {
            cout<<3<<endl;
        }
        else
            cout<<1<<endl;
    }
    else if(str[0] == '0' && str[n-1] == '0')
    {
        if (count(str.begin(), str.end(), '1') > 0) 
        {
            cout<<2<<endl;
        }
        else
            cout<<0<<endl;
    }
    else
        cout<<1<<endl;

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