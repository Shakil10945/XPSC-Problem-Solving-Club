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
    
    bool check = true;
    int x = (n*2)-1;
    for(int i=0, j=n-1; i<=j; i++, j--)
    {
        if(vec[i] <x || vec[j]<x)
            check= false;
        x-=2;
    }
    if(check)   cout<<"YES"<<endl;
    else        cout<<"NO"<<endl;
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