#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> vec;
vector<int> vec2;

void input()
{
    cin >> n >> m;
    vec.resize(n);
    vec2.resize(m);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    for (int i = 0; i < m; i++)
        cin >> vec2[i];
}

void solve()
{
    input();
    
    map<int, int> my_map;
    for(int i=0;i<n;i++)
    {
        my_map[vec[i]]++;
    }

    vector<int>prefix_size;
    for(int i=0;i<n; i++)
    {
        prefix_size.push_back(my_map.size());

        my_map[vec[i]]--;
        if(my_map[vec[i]] == 0)
        {
            my_map.erase(vec[i]);
        }
    }
    for(int i=0; i<m; i++)
    {
        cout<<prefix_size[vec2[i]-1]<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //int t;
    //cin >> t;
    //while (t--)
    solve();

    return 0;
}