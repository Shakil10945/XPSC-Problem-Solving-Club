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
        int n; cin>>n;
        string str; cin>>str;
        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(str[0] == str[1])
        {
            cout<<"NO"<<endl;
            continue;
        }
        bool check = true;
        for(int i=2; i<n; i+=2)
        {
            if(str[0] != str[i])
            {
                cout<<"NO"<<endl;
                check = false;
                break;
            }
        }
        if(check)
        {
            for(int i=3; i<n; i+=2)
            {
                if(str[1] != str[i])
                {
                    cout<<"NO"<<endl;
                    check = false;
                    break;
                }
            }
        }
        if(check)
            cout<<"YES"<<endl;
    }

    return 0;
}

