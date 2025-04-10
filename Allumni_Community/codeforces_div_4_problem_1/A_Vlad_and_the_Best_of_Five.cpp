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

    cout<<((count(str.begin(),str.end(), 'A') > count(str.begin(),str.end(), 'B'))? "A": "B")<<endl;
    
    
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