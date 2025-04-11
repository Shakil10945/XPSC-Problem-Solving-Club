#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<int, int>> vec;

void input()
{
    cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i].first >> vec[i].second;
    
}

void solve()
{
    input();
    
    int response = 0, rating = 0;

    for(int i=0;i<n; i++)
    {
        if(vec[i].first >10)    continue;

        if(vec[i].second > rating)
        {
            rating = vec[i].second;
            response = i + 1;
        }
    }
    cout<<response<<endl;
    
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