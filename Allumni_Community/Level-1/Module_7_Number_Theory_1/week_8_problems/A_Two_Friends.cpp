#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin >> n;
    vec.resize(n+1);

    for (int i = 1; i <= n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();
    
    for(int i=1; i<=n;i++)
    {
        if(i == vec[vec[i]])
        {
            cout<<2<<endl;
            return;
        }
    }
    cout<<3<<endl;
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