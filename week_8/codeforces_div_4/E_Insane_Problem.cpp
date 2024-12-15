#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        long long k, l1, r1, l2, r2;
        cin>>k>>l1>>r1>>l2>>r2;

        long long s =0;

        for(long long x=l1; x<=r1; x++)
        {
            for(long long j=0;j<=r2; j++)
            {
                long long y = x*(pow(k,j));
                if(y>r2)
                    break;
                
                if(y>=l2 && y<=r2)
                {
                    // if(y == 1)
                    // {
                    //     s+=(r2-l2);
                    //     break;
                    // }
                    s++;
                }
            }
        }
        
        cout<<s<<endl;
    }
    

    
    

    return 0;
}