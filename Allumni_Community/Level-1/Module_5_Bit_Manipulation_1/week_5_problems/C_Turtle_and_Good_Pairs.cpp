
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
        int n;
        cin>>n;
        string str; cin>>str;

        sort(str.begin(), str.end());

        for(int i=0; i<n/2; i++)
        {
            cout<<str[i]<<str[n-i-1];
        }
        if(n&1)     cout<<str[n/2];
        cout<<endl;
    }

    return 0;
}


