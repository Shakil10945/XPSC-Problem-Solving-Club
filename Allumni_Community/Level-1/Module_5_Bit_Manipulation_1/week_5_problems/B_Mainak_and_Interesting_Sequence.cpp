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
        int n, m;
        cin>>n>>m;

        if(n>m)
        {
            cout<<"No"<<endl;
            continue;
        }
        else
        {
            
            if(n%2==1)
            {
                cout<<"Yes"<<endl;
                for(int i=1; i<=n-1; i++)
                {
                    cout<<1<<" ";
                }
                cout<<m-(n-1)<<endl;
            }
            else
            {
                if(m%2==0)
                {
                    cout<<"Yes"<<endl;
                    for(int i=1; i<=n-2; i++)
                    {
                        cout<<1<<" ";
                    }
                    cout<<(m-(n-2))/2 << " "<< (m-(n-2))/2<<endl;
                }
                else
                    cout<<"No"<<endl;
            }
        }
    }

    return 0;
}

