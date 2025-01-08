#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin>>n;
    vec.resize(n);

    for(int i=0; i<n; i++)  cin>>vec[i];
}

void solve()
{
    input();
    int maxx = 0;
    for(int i=0; i<n; i++)
    {
        if(vec[i]>maxx)  cout<<1<<" ";
        else    cout<<0<<" ";
        maxx = max(vec[i], maxx);
    }
    cout<<endl;
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
