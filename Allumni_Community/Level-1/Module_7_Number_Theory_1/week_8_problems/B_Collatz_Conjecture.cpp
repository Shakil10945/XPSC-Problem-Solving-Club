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
        int x,y,k;
        cin>>x>>y>>k;
        if(x==y|| (x%y==0))
        {
            x++;
            k--;
        }

        while(x>y && k>0)
        {
            int d = ((x+y-1)/y)*y - x;

            x+=min(d,k);
            k-=min(d,k);
            while(x%y==0)
            {
                x=(x/y);
            }
        }
        if(k==0)
        {
            cout<<x<<endl;
            continue;
        }
        if(x!=1)
        {
            int d = y-x;
            x+=min(d,k);
            k-=min(d,k);
            if(x==y)    x=1;
            if(k==0)
            {
                cout<<x<<endl;
                continue;
            }
        }
        if(x==1)
        {
            cout<<(k%(y-x))+1<<endl;
            continue;
        }
    }

    return 0;
}

