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
    
    for(int i=1; i<n;i++)
    {
        if(abs(vec[i]-vec[i-1])<=1)
        {
            cout<<0<<endl;
            return;
        }
    }
    bool increasing = true, decreasing = true;

    for(int i=1; i<n;i++)
    {
        if(vec[i]<vec[i-1])
        {
            increasing = false;
        }
    }
    for(int i=1; i<n;i++)
    {
        if(vec[i]>vec[i-1])
        {
            decreasing = false;
        }
    }
    if(increasing || decreasing)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<1<<endl;


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