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
    
    vec.push_back(7);
    vec.pop_back();
    vec.front();
    vec.back();
    vec.empty();
    vec.clear();
    vec.size();
    vec.assign(10,5);
    vec.resize(7); vec.resize(7,2);

    vec.begin();
    vec.end();
    --vec.end();

    vec.rbegin();
    vec.rend();

    reverse(vec.begin(),vec.end());
    sort(vec.begin(),vec.end());
    min_element(vec.begin(),vec.end());
    max_element(vec.begin(),vec.end());
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