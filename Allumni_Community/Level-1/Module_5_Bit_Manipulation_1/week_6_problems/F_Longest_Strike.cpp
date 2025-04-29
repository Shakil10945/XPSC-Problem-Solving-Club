#include <bits/stdc++.h>
using namespace std;

int n,k;
vector<int> vec;

void input()
{
    cin >> n >> k;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    map<int,int>mymap;
    for(auto x: vec)
        mymap[x]++;
    
    vector<int>c;
    for(auto x: mymap)
    {
        if(x.second >=k)    c.push_back(x.first);
    }

    if(c.size() == 0)
    {
        cout<<-1<<endl;
        return;
    }

    sort(c.begin(),c.end());

    int mx = 0;

    int lans = c[0];
    int rans = c[0];

    int l = c[0];

    for(int i=1; i<c.size(); i++)
    {
        if(c[i]-1 == c[i-1])
        {
            if(c[i]-l >mx)
            {
                lans = l;
                rans = c[i];
                mx = c[i] - l;
            }
        }
        else
            l = c[i];
    }
    cout<<lans<<" "<<rans<<endl;
    
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