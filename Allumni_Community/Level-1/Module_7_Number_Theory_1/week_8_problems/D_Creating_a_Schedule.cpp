#include <bits/stdc++.h>
using namespace std;

int m,n;
vector<int> vec;

void input()
{
    cin >>m>> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    sort(vec.begin(),vec.end());

    vector<vector<int>>final(m);
    if(n==1)
    {
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<6; j++)
            {
                cout<<vec[0]<<" ";
            }
            cout<<endl;
        }
        return;
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<6; j++)
        {
            final[i].push_back(vec[j]);
            final[i].push_back(vec[n-j]);
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0;j<6)
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