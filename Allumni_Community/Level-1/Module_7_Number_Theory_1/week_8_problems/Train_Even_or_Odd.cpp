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
    
    long long odd = 0;
    long long even = 0;

    for(int i=0; i<n; i+=2)
    {
        even+=vec[i];
    }
    for(int i=1; i<n; i+=2)
    {
        odd+=vec[i];
    }

    cout<<max(even, odd)<<endl;
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