#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> vec;

void input()
{
    cin >> n>>k;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();
    int d = 0;
    for(int i=1; i<=n; i++)
    {
        if(abs(vec[i-1]-i)%k!=0)    d++;
    }

    if(!d)  cout<<0<<endl;
    else if(d==2)   cout<<1<<endl;
    else            cout<<-1<<endl;


    
    
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