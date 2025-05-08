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
        int n, k;
        cin>>n>>k;

        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        if(n<=k)
        {
            cout<<1<<endl;
            continue;
        }
        //int x = 1 + ((n-k)/(k-1))
        cout<<(1 + ((n-k)/(k-1)) + (((n-k)%(k-1))? 1: 0))<<endl;
    }

    return 0;
}

