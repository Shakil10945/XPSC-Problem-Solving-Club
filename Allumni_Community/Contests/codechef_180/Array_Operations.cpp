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
    
    for(int i=0; i<n-2; i++)
    {
        vec[i] = max({vec[i]+1, vec[i+1], vec[i+2]+1});
        vec[i+1] = max({vec[i]+1, vec[i+1], vec[i+2]+1});
        vec[i+2] = max({vec[i]+1, vec[i+1], vec[i+2]+1});
    }

    cout<< *max_element(vec.begin(),vec.end())<<endl;
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