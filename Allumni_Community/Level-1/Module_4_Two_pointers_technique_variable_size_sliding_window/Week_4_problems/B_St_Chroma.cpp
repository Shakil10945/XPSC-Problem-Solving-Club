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

        for(int i=0; i<n; i++)
        {
            if(i==k)    continue;
            cout<<i<<" ";
        }
        if(k==n){
            cout<<endl;
            continue;
        }
        cout<<k<<endl;
    }

    return 0;
}

