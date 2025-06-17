#include <bits/stdc++.h>
using namespace std;

int n,s;
vector<int> vec;

void input()
{
    cin >> n>>s;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    cout<<(min(abs(s-vec[0]),abs(s-vec[n-1]))) + (abs(vec[0]-vec[n-1]))<<endl;
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