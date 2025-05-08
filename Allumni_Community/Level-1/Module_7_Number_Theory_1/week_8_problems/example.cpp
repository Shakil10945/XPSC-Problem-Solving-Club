
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

        if(n>k+1)
        {
            cout<<-1<<endl;
            continue;
        }
        if(n==k+1)
        {
            int x = 1;
            for(int i=1;i<=n;i++)
            {
                cout<<x<<" ";
                x++;
            }
            continue;
        }
        int j=1;
        cout<<(k-(n-2))<<" "<<2*(k-(n-2))<<" ";
        for(int i=0;i<n-2;i++)
        {
            cout<<j<<" ";
            j++;
        }
        cout<<endl;

    }

    return 0;
}

