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
        string str;
        cin>>str;
        
        map<char,int>mp;
        for(auto x: str)
        {    
            if(x!='?')
                mp[x]++;
        }

        int zz = 0;
        for(auto x: mp)
            zz += min(x.second, n);
        cout<<zz<<endl;
        
    }

    return 0;
}

