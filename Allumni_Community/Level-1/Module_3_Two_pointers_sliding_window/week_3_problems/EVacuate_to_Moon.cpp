#include <bits/stdc++.h>
using namespace std;

long long n,m, h;
vector<long long> vec;
vector<long long int> station;

void input()
{
    cin >> n>>m>>h;
    vec.resize(n);
    station.resize(m);

    for (int i = 0; i < n; i++)
        cin >> vec[i];

    for (int i = 0; i <m; i++)
        cin >> station[i];
    
}

void solve()
{
    input();

    sort(vec.begin(),vec.end(),greater<int>());
    sort(station.begin(),station.end(), greater<int>());

    long long int sum = 0;
    for(int i=0;i<m; i++)
    {
        station[i] = station[i]*h;
    }
    
    for(int i=0; i<min(n,m); i++)
    {
        sum += min(vec[i],station[i]);
    }
    cout<<sum<<endl;
    
    
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