#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;
int maxx = 0;

void input()
{
    cin>>n;
    maxx =0;
    vec.resize(n);

    for(int i=0; i<n; i++)
    {  
        cin>>vec[i];
        maxx = max(maxx, vec[i]);
    }
}

void solve()
{
    input();
    cout<<maxx<<endl;    
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
