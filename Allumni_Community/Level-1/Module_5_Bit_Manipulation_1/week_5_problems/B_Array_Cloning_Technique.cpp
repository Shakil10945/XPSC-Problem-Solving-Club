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
    int ax =0;
    map<int,int>mymap;
    for(auto x: vec)
    {
        mymap[x]++;
        ax = max(mymap[x], ax);
    }

    int rem = n-ax;
    int count = 0;
    while (rem>0)
    {
        count += min(rem+1, 1+ax);
        
        rem-=ax;
        ax+=ax;
    }
    cout<<count<<endl;
    
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