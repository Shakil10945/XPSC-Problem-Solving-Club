#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        int n,m,k;
        cin>>n>>m>>k;

        vector<int> vec(m+1);
        for(int i=0; i<=m; i++)
            cin>>vec[i];
        
        set<int>bit;
        for(int i=0; i<31; i++)
        {
            if((vec[m]>>i)&1)   bit.insert(i);
        }
        int ans = 0;
        for(int i=0; i<m; i++)
        {
            int count=0;
            for(int j=0; j<31;j++)
            {
                if(((vec[i]>>j)&1) != ((vec[m]>>j)&1))
                {
                    count++;
                    // if(!bit.count(j))
                    // {
                    //     count++;
                    // }
                }

            }
            if(count<=k)
            {
                ans++;
            }
        }
        cout<<ans<<endl;

    return 0;
}

