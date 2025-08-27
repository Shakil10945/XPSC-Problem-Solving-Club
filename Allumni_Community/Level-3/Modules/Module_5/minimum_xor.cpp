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
        int n, Xor = 0;
        cin>>n;
        vector<int> a(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            Xor ^= a[i];
        }

        int ans = Xor;
        for(int i=0; i<n; i++)
        {
            int currXor = (Xor ^ a[i]);
            ans = min(ans, currXor);
        }
        cout<<ans<<endl;
    }

    return 0;
}

