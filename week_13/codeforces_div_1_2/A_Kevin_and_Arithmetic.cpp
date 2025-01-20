#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;
int even = 0;

void input()
{
    cin >> n;
    vec.resize(n);
    even =0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        if(vec[i]%2 == 0)
            even++;
    }
}

void solve()
{
    input();
    if(n==1 && vec[0] == 1)
    {
        cout<<0<<endl;
        return;
    }
    int odd = n - even;

    if(odd)
    {
        if(even)
            cout<<1+odd<<endl;
        else
        {
            cout<<n-1<<endl;
        }
    }
    else
    {
        cout<<1<<endl;
    }
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