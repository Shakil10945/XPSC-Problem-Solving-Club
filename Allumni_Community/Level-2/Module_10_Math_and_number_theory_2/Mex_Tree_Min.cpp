#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> vec(n+1, 0);

        for(int i=0; i<n-1; i++)
        {
            int u, v;

            cin>>u>>v;

            vec[u]++;
            vec[v]++;
        }

        int leafCnt = 0;
        for(int i=1; i<=n; i++)
        {
            if(vec[i]==1)   leafCnt++;
        }

        if(leafCnt==2)
        {
            long long ans = 2ll*n-1;
            cout<<ans<<endl;
        }
        else
        {
            long long ans = (long long )n+1;
            cout<<ans<<endl;
        }


    }

    return 0;
}

