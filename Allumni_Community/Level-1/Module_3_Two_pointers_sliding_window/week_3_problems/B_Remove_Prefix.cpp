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
    
    set<int>myset;

    for(int i=n-1; i>=0; i--)
    {
        if(myset.count(vec[i]))
        {
            cout<<i+1<<endl;
            return;
        }
        myset.insert(vec[i]);
    }
    cout<<0<<endl;
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