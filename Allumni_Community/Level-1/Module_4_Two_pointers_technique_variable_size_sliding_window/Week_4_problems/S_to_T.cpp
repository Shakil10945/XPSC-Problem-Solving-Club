#include <bits/stdc++.h>
using namespace std;

int n;
string s,t;

void input()
{
    cin >> n;
    cin>>s>>t;
    
}

void solve()
{
    input();

    if(s==t)
    {
        cout<<0<<endl;
        return;
    }
    auto it = find(s.begin(), s.end(), '1');
    auto itt = find(t.begin(), t.end(), '1');

    int s_one = it - s.begin();
    int t_one = itt - t.begin();
    
    if(s_one != t_one)
    {
        cout<<-1<<endl;
        return;
    }

    
    
    
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