#include <bits/stdc++.h>
using namespace std;

int n;
long long x,y;
vector<int> vec;

void input()
{
    cin>>n>>x>>y;
    vec.resize(n);
    for(int i=0; i<n; i++)  cin>>vec[i];
}

void solve()
{
    input();
    long long sum = accumulate(vec.begin(),vec.end(),0);

    long long rem = sum - x;
    int count = 0;
    for(int i=0; i<n-1; i++)
    {
        if(vec[i] > rem)   continue;
        for(int j=i+1; j<n; j++)
        {
            sum -= (vec[i] + vec[j]);
            if(sum>=x && sum<=y)    count++;

            sum += (vec[i] + vec[j]);
        }
    }
    cout<<count<<endl;
    
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
