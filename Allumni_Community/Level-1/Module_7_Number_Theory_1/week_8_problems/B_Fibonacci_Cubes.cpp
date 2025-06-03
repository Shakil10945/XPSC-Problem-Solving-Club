#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<int>f= {0,1,2,3,5,8,13,21,34,55,89};
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int x = f[n]+f[n-1];
        int y = f[n];
        for(int i=1; i<=m;i++)
        {
            int wi,li,hi;   cin>>wi>>li>>hi;

            if(wi>=x)
            {
                if(li>=y && hi>=y)
                {
                    cout<<1;
                    continue;
                }
            }
            if(li>=x)
            {
                if(wi>=y && hi>=y)
                {
                    cout<<1;
                    continue;
                }
            }
            if(hi>=x)
            {
                if(li>=y && wi>=y)
                {
                    cout<<1;
                    continue;
                }
            }
            cout<<0;
            
        }
        cout<<endl;
    }

    return 0;
}

