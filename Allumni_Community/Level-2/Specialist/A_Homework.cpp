#include <bits/stdc++.h>
using namespace std;

int n, m;
deque<char> vec;
deque<char> b;
deque<char> c;

void input()
{
    cin >> n;
    //vec.resize(n);

    for (int i = 0; i < n; i++)
    {
        char x;
        cin>>x;
        vec.push_back(x);
    }

    cin>>m;


    for (int i = 0; i < m; i++)
    {
        char x;
        cin>>x;
        b.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        char x;
        cin>>x;
        c.push_back(x);
    }
}

void solve()
{
    input();

    for(int i=0; i<m; i++)
    {
        if(c[i]=='V')   vec.push_front(b[i]);
        else            vec.push_back(b[i]);
    }

    for(auto x: vec)
        cout<<x;
    cout<<endl;

    vec.clear();
    b.clear();
    c.clear();
    
    
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