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
        vector<int>tem(n-1);
        for(int j=0; j<n; j++)
        {
            cin>>tem[i];
            if(j==0)    fq[tem[i]]++;
        }
        vec[i] = tem;
        tem.clear();
    }
    
}

void solve()
{
    input();
    int search = 0;
    for(int i=1; i<=n;i++)
    {
        if(fq[i] == 1)
        {
            cout<<fq[i]<<" ";
            for(int j=0; j<n;j++)
            {
                if(vec[j][0]!= i)
                {
                    for(int k=0; k<n;k++)
                    {
                        cout<<vec[j][k]<<" ";
                    }
                }
                cout<<endl;
                return;
                
            }
        }
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