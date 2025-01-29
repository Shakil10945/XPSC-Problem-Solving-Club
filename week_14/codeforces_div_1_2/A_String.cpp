#include <bits/stdc++.h>
using namespace std;

string str;

void input()
{
    cin >> str;
}

void solve()
{
    input();
    int count =0;

    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == '1')
            count++;
    }
    cout<<count<<endl;
    str.clear();   

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