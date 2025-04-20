#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> vec;

void input()
{
    cin >> n>>m;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    vector<int> p(n);
    map<int, int> mymap;
    for(auto x: vec)
        mymap[x]++;

    for(int i=0; i<n; i++)
    {
        p[i] = mymap.size();

        mymap[vec[i]]--;
        if(mymap[vec[i]] ==0)
        {
            mymap.erase(vec[i]);
        }
    }

    for(int i=0; i<m; i++)
    {
        int d;
        cin>>d;
        cout<<p[d-1]<<endl;
    }
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    //cin >> t;
    //while (t--)
    solve();

    return 0;
}