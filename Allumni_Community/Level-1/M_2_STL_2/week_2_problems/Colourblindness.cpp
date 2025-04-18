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
        string str;
        cin>>str;

        string st;
        cin>>st;
        bool ch = true;
        for(int i=0; i<n; i++)
        {
            if((str[i] == 'R' && st[i] != 'R' ) ||(st[i] == 'R' && str[i] != 'R' ))
            {
                cout<<"NO"<<endl;
                ch = false;
                break;
            } 
        }
        if(ch)  cout<<"YES"<<endl;
    }

    return 0;
}

