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
    map<int, int>my_map;
    sort(vec.begin(),vec.end());
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=__lg(vec[i]); j++)
        {
            if((vec[i]>>j) & 1)
            {
                my_map[j]++;
            }
        }
    }

    if(vec[0] == 0)
        cout<<my_map.size()+1 <<endl;
    else
        cout<<my_map.size() <<endl;
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