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
        int a,b,x,y;    cin>>a>>b>>x>>y;

        if(a>b)
        {
            if(a==(b+1) && a%2==1)
            {
                cout<<y<<endl;
                continue;
            }
            cout<<-1<<endl;
            continue;
        }
        int cost = 0;
        while(a!=b)
        {
           if(a%2==0)
           {
                a++;
                cost+=min(x,y);
           }
           else
           {
                a++;
                cost+=x;
           }

        }
        cout<<cost<<endl;
    }

    return 0;
}

