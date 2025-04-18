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
    map<int,int>mymap;
    input();
    for (int i = 0; i < n; i++)
        mymap[vec[i]]++;
    
    int xx = 0, l =-1;
    for(auto x: mymap)
    {
        if(x.second >xx)
        {
            xx = x.second;
            l= x.first;
        }
    }
    cout<<xx<<endl;
    
    
    
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