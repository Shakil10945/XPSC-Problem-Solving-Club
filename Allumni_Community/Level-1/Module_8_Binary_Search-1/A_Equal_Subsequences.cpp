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

        for(int i=1; i<=k; i++)
            cout<<1;
        n=(n-k);
        for(int i=1; i<=n; i++)
        {
            cout<<0;
        }
        cout<<endl;

    }

    return 0;
}

