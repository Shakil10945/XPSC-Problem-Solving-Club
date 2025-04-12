#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> vec;

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

    for(int i=0; i<n;i++)
    {
        if(count(vec[i].begin(), vec[i].end(), '1') ==1)
        {
            cout<<"TRIANGLE"<<endl;
            return;
        }
    }
    cout<<"SQUARE"<<endl;
    
    
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