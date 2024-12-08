#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        if(n==1)
        {
            cout<<n<<endl;
        }
        if(n>=2 && n<=4)
        {
            cout<<2<<endl;
        }

        if(n>=5)
        {
            int l=1, r=4;
            int count = 1;

            while(r<=n)
            {
                //cout<<r<<endl;
                count++;
                if(r<n && (r+1)*2>n) count++;
                r=(r+1)*2;
            }
            

            cout<<count<<endl;
        }
    }


    return 0;
}