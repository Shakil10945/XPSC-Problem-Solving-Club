#include <bits/stdc++.h>
using namespace std;

int n,k;
vector<int> vec;
vector<int> vec2;

void input()
{
    cin >> n>>k;
    vec.resize(n);
    vec2.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    for (int i = 0; i < n; i++)
        cin >> vec2[i];
    
    
    
}

void solve()
{
    input();
    
    
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