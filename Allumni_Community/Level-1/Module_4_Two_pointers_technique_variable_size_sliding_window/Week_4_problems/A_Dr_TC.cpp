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
        int n;cin>>n;
        string str; cin>>str;

        int ans =0;
        for(int i=0; i<n; i++)
        {
            if(str[i] =='0')    str[i]='1';
            else                str[i]= '0';
            ans+=count(str.begin(),str.end(), '1');
            if(str[i] =='0')    str[i]='1';
            else                str[i]= '0';
        }
        cout<<ans<<endl;
    }

    return 0;
}

