#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;
vector<int> b;

void input()
{
    cin >> n;
    vec.resize(n);
    b.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    for (int i = 0; i < n; i++)
        cin >>b[i];
    
}

void solve()
{
    input();

    deque<int>a;
    for(auto x: vec)
        a.push_back(x);
    int nt = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i]>b[i])
        {
            a.push_front(b[i]);
            nt++;
        }
    }
    cout<<nt<<endl;
    
    
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