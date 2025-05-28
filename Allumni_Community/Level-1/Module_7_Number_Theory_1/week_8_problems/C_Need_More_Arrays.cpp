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
    int x = vec[0];
    int count = 0;
    for(int i=1; i<n; i++)
    {
        if(vec[i]>(x+1))
        {
            count++;
            x = vec[i];
        }
    }
    cout<<count+1<<endl;
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