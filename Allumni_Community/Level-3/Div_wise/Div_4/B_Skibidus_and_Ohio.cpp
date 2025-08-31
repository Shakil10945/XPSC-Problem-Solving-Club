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
        string s;
        cin>>s;
        bool x = false;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i] == s[i-1])
                x = true;
        }
        cout<<(x? 1: s.size())<<endl;
    }

    return 0;
}

