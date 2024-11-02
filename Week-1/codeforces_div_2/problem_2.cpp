#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;

        if(1+(n/2) != m)        cout<<-1<<endl;
        else
        {
            int l =1;
            for(int i=1;i<=n;i++)
            {
                if(n%i==0 && i%2!=0 && i!=n)
                {
                    l = i;
                }
            }

            if(l==1)
            {
                cout<< 1<<endl;
                cout<< 1<<endl;
            }

            else
            {
                cout<<l<<endl;
                for(int i=1;i<n;i++)
                {
                    if(!l)      break;
                    if(l!=1)
                    {
                        cout<<i<<" ";
                    }
                    else
                    {
                        cout<<i<<endl;
                    }
                    l--;
                }
            }
        }
    }
    
    

    return 0;
}