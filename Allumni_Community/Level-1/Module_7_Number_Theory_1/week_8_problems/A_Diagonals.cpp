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
        int n,k;  cin>>n>>k;
        int x =0;
        if(k<=n)
        {
            cout<<(k? 1: 0)<<endl;
            continue;
        }

        k-=n;
        int countt = 1;
        int i=1;
        while(k>0)
        {
            k-= (n-i);
            countt++;
            if(k<=0)    break;

            k-=(n-i);
            countt++;

            i++;
        }
        cout<<countt<<endl;
    }


    return 0;
}

