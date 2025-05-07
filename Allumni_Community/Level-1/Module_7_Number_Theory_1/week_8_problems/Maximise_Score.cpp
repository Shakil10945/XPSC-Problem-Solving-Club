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
    
    int diff = 1000000000;
    for(int i=0; i<n-1; i++)
    {
        diff = min(diff, abs(vec[i]-vec[i+1]));
    }
    if((abs(vec[0]-vec[1])==diff) || (abs(vec[n-1]-vec[n-2])==diff))
    {
        cout<<diff<<endl;
        return;
    }
    
    int alice = 1000000000;
    for(int i=1; i<n-1; i++)
    {
        int bob  = 0;
        bob = max(abs(vec[i]-vec[i-1]), abs(vec[i]-vec[i+1]));
        alice =min(alice, bob);
    }
    cout<<alice<<endl;
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