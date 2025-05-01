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
        int n, x; cin>>n>>x;

        if(!x)
        {
            if(n==1)
            {
                cout<<-1<<endl;
                continue;
            }
            if(n%2==0)
            {
                cout<<n<<endl;
                continue;
            }
            else
            {
                int x = n-2 + (5);
                cout<<x<<endl;
                continue;
            }
        }
        if(x == 1)
        {
            if(n%2==1)
            {
                cout<<n<<endl;
            }
            else
            {
                cout<< (n-2 + (5))<<endl;
            }
            continue;
        }

        else
        {
            int countt = 0;
            for(int i=0; i<31; i++)
            {
                if((x>>i)&1)    countt++;
            }

            if(n<=countt)
            {
                cout<<x<<endl;
                continue;
            }
            else
            {
                if((n - countt)%2 == 0)
                {
                    cout<<x+(n - countt)<<endl;
                    continue;
                }
                else
                {
                    cout<<x+(n-countt)+1<<endl;
                }
            }
        }


    }

    return 0;
}

