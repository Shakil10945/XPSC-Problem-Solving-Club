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

        int ans  = 0;
        if(k==1)
        {
            cout<<n<<endl;
            continue;
        }
        int dd = 0;
        while (n)
        {
            dd+=n%k;
            n/=k;
        }
        cout<<dd<<endl;

    }

    return 0;
}

