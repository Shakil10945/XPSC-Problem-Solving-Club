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
        int n;  cin>>n;
        map<char,int>mp;
        string str;
        cin>>str;
        for(auto x: str)    mp[x]++;

        int ans = 0;

        for(auto x: mp)
        {
            if(x.first!='?')    ans+=min(n, x.second);
        }
        cout<<ans<<endl;
    }

    return 0;
}

