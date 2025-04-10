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

    for(int i=0; i<str.size()-2;i++)
    {
        cout<<str[i];
    }
    cout<<"i"<<endl;

    //cout<< str.substr(0, str.size()-2)<<"i"<<endl;

    
    
    
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