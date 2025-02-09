#include <bits/stdc++.h>
using namespace std;

string str;

void input()
{
    cin>>str;
}

void solve()
{
    input();
    bool c = false;

    for(int i=0; i<str.size()-1;i++)
    {
        if(str[i] == str[i+1])
        {
            c = true;
            break;
        }
    }    
    if(c)   cout<<1<<endl;
    else    cout<<str.size()<<endl;

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