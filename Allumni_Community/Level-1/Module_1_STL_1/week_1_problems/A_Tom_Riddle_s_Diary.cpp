#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    set<string>sett;
    while (t--)
    {
        string str;
        cin>>str;
        if(sett.count(str))
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
        sett.insert(str);
        
    }

    return 0;
}

