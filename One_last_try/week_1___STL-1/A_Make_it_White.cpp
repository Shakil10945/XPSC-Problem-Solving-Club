#include <bits/stdc++.h>
using namespace std;

int n;
string str;

void input()
{
    cin>>n;
    cin>>str;
}

void solve()
{
    input();

    int first_pos = -1;
    int last_pos = -1;

    first_pos = str.find('B');
    last_pos = str.rfind('B');

    if(first_pos == -1)
    {
        cout<< 0 <<endl;
        return;
    }

    cout<< last_pos - first_pos +1 <<endl;

    
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
