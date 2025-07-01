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
        int x,k;
        cin>>x>>k;

        if(x==1)
        {

            
            if(k==2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            continue;
        }
        if(k>1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        bool ch = false;
        for(int i=2; i*i<=x; i++)
        {
            if(x%i==0)
            {
                ch= true;
                break;
            }
        }
        cout<<(ch? "NO": "YES")<<endl;
    }

    return 0;
}

