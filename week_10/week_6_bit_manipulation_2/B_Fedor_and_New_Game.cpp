#include <bits/stdc++.h>
using namespace std;

int n,m, k;
int maxx = 0;
vector<int>vec;

void input()
{
    cin>>n>>m>>k;
    vec.resize(m+1);
    
    for(int i=0; i<=m; i++)
    {
        cin>>vec[i];
        maxx = max(maxx, __lg(vec[i]));
    }
}

void solve()
{
    input();
    int count = 0;
    int total = 0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<=maxx; j++)
        {
            //if(vec[i] & (1<<j)) || (vec[m] & (1<<j))
            if((vec[i] & (1<<j)) != (vec[m] & (1<<j)))
                count++;
        }
        if(count<=k)    total++;
        count = 0;
    }
    cout<<total<<endl;
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t=1;  //cin>>t;
    while(t--)  solve();

    return 0;
}