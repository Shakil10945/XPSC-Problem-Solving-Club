#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;
map<int,int>my_map;

void input()
{
    cin>>n;
    vec.resize(n);
    vec.push_back(0);
    for(int i=1; i<=n; i++)
    {
        cin>>vec[i];

        for(int j=0; j<=__lg(vec[i]); j++)
        {
            if((vec[i] >> j) & 1)
                my_map[vec[i]]++;
        }
    }  
}

void solve()
{
    input();

    for(int i=1; i<=n; i++)
    {
        if(my_map[vec[i]] != my_map[i])
        {
            cout<<"NO"<<endl;
            my_map.clear();  
            return;
        }
    }
    cout<<"YES"<<endl;
    my_map.clear();    
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
