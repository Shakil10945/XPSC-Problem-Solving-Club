#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  cin>>t;
    while (t--)
    {
        int m,a,b,c;
        cin>>m>>a>>b>>c;

        int s=0;
        int total= 2*m;

        if(m>=a)
        {
            total -= a;
            a=0;
        }
        if(m>=b)
        {
            total -=b;
            b=0;
        }

        if(m<a)
        {
            total-=m;
            a-=m;
        }
        if(m<b)
        {
            total -=m;
            b-=m;
        }

        if(total>0)
        {
            total-=c;
            c-=c;
        }
        if(total>0)
            cout<<2*m - total<<endl;
        else
            cout<<2*m<<endl;

    }

    

    
    

    return 0;
}