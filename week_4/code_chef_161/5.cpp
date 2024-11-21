#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)  cin>>v[i];

        int l=0, m=1, r=2;
        int sum=0;
        bool c =false;

        while (r<n)
        {
            if((v[r] + v[l]) ==4)
            {
                int x = 4 - v[m];
                if(x<v[m])  v[m]=x;

                if(! l==0 )
                {
                    c = true;
                    l-=2;
                    r-=2;
                    m-=2;
                }
            }
            r++;
            l++;
            m++;
        }
        sum = accumulate(v.begin(), v.end(), 0);
        cout<< sum<<endl;
        
    }   

    return 0;
}