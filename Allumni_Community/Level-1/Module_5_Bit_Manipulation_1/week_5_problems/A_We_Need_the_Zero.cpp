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
    
    int xxor = 0;
    for(auto x: vec)
        xxor ^= x;
    
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        ans ^=(xxor^vec[i]);
    }

    if(ans==0)
    {
        cout<<xxor<<endl;
    }
    else
        cout<<-1<<endl;
    
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