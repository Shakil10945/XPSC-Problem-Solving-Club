#include <bits/stdc++.h>
using namespace std;

int n, a;
vector<int> vec;

void input()
{
    cin >> n>>a;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    for(int i=0;i<n;i++)
    {
        if(vec[i] == a)
            continue;
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    //cin >> t;
    //while (t--)
    solve();

    return 0;
}