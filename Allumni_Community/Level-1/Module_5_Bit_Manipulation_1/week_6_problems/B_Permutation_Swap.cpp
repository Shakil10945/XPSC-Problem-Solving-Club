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
    int k=0;
    for(int i=1; i<=n; i++)
    {
        k = __gcd(k, abs(vec[i]-i));
    }
    cout<<k<<endl;
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