#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> vec;

void input()
{
    cin >> n >> m;
    vec.resize(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>vec[i][j];
        }
    }

     for (int i = 0; i < n; i++)
    {
        for(int j=0; j<m; j++)
        {
            sort(vec[i].begin(), vec[i].end());
        }
    }
}

void solve()
{
    input();

    int check = false;
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }

    for(int i=0;i<n; i++)
    {
        if(check)   break;
        for(int k=0; k<n; k++)
        {
            if(check)    break;
            if(k == i)  continue;
            for(int j=0; j<m; j++)
            {
                if(vec[i][j] < vec[k][j])
                {
                    break;
                }
                if(j==m-1 && (vec[i][j] >= vec[k][j]))
                {
                    check = true;
                    break;
                }
            }
        }
    }
    if(check)
    {
        for(int i=1; i<=n; i++)
            cout<<i<<" ";
        cout<<endl;
    }
    else
        cout<<-1<<endl;
    
    vec.clear();
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