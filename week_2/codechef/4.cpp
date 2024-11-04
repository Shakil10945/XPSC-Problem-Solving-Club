#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;cin>>t;
    while (t--)
    {
        int h, k;
        cin>>h>>k;

        h = h*k;

        int sum =0;
        int m =0;

        while (h!=1)
        {
            for(int i=1; i<=h/2; i++)
            {
                if(h%i == 0)    m = i;

            }
            h/=m;
            sum++;
        }
        cout<<sum<<endl;
        
    }
    
    

    return 0;
}