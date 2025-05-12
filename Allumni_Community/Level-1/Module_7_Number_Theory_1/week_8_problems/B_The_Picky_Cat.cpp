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
    
    if(n==1 || n==2 || vec[0]==0)
    {
        cout<<"YES"<<endl;
        return;
    }
    int tar = vec[0], x =0;
    
    for(int i=0; i<vec.size();i++)
    {
        if(abs(tar)>abs(vec[i])) x++;
    }

    if(x<=(n/2))    cout<<"YES"<<endl;
    else            cout<<"NO"<<endl;

    
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