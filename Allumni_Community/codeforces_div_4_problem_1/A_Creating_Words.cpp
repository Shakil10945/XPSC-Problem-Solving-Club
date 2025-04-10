#include <bits/stdc++.h>
using namespace std;

string st, str;

void input()
{
    cin >>st>>str;
    
}

void solve()
{
    input();

    cout<<str[0]<<st.substr(1, st.size())<<" "<<st[0]<<str.substr(1,str.size())<<endl;
    
    
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