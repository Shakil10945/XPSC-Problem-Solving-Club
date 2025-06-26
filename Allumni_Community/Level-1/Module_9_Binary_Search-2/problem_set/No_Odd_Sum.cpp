#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    int twos = count(vec.begin(),vec.end(), 2);
    int ones = count(vec.begin(),vec.end(), 1);

    if(!twos || !ones)
    {
        cout<<0<<endl;
        return;
    }

    if(ones%2==0)
    {
        cout<<min(ones/2, twos)<<endl;
    }
    else
    {
        cout<<twos<<endl;
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