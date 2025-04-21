#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> vec;
vector<int>fq;

void input()
{
    cin >> n;
    vec.resize(n);
    fq.resize(n+1, 0);
    

    for (int i = 0; i < n; i++)
    {
        vector<int>tem;
        for(int j=0; j<n-1; j++)
        {
            int x;
            cin>>x;
            tem.push_back(x);
            if(j==0)    fq[tem[j]]++;
        }
        vec[i] = tem;
    }
    
}

void solve()
{
    input();
    // for(int i=1; i<=n; i++)     cout<<fq[i]<<" ";
    // cout<<endl;
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0;j<n-1; j++)
    //         cout<<vec[i][j]<<" ";
    //     cout<<endl;
    // }
    int search = 0;
    for(int i=1; i<=n;i++)
    {
        if(fq[i] == n-1)
        {
            cout<<i<<" ";
            for(int j=0; j<n;j++)
            {
                if(vec[j][0]!= i)
                {
                    for(int k=0; k<n-1;k++)
                    {
                        cout<<vec[j][k]<<" ";
                    }
                    cout<<endl;
                    fq.clear();
                    return;
                }
                
                //return;
                
            }
        }
    }

    //fq.clear();
    
    
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