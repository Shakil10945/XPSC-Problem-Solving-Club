#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> vec;

void input()
{
    cin >> n >>m;
    vec.resize(n);

    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        vec[i] = x;
    }
    
}

void solve()
{
    input();
    map<int,vector<int>>mymap;

    for(int i=0;i<n; i++)
    {
        mymap[vec[i]].push_back(i);
    }

    while(m--)
    {
        int l, r;
        cin>>l>>r;

        if(mymap.count(l) && mymap.count(r))
        {
            if(*mymap[l].begin() < *mymap[r].rbegin())
            {
                cout<<"YES"<<endl;
                continue;
            }
        }
        cout<<"NO"<<endl;
    }
    
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