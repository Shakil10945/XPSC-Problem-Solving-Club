#include <bits/stdc++.h>
using namespace std;

int n;
string s,t;

void input()
{
    cin>>n;
    cin>>s>>t;
}

void solve()
{
    input();

    int count_1=0, count_0=0;

    bool not_found= false;

    for(int i=0; i<n; i++)
    {
        if(s[i] != t[i])
        {
            if((s[i] == '0' && t[i] == '1') && (!count_1))
            {
                not_found = true;
                break;
            }
        }
        if(s[i] == '0') count_0++;
        else            count_1++;
    }
    if(not_found)       cout<<"NO"<<endl;
    else                cout<<"YES"<<endl;

    s.clear();
    t.clear();
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
