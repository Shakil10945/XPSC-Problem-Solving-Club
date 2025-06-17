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
        string str; cin>>str;

        set<char>st1,st2;
        bool ch = false;

        for(int i=0; i<n-1; i++)
        {
            if(st1.count(str[i]))
            {
                ch = true;
                break;
            }
            st1.insert(str[i]);
        }
        if(ch)
        {
            cout<<"Yes"<<endl;
            continue;
        }

        for(int i=1; i<n; i++)
        {
            if(st2.count(str[i]))
            {
                ch = true;
                break;
            }
            st2.insert(str[i]);
        }
        if(ch)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        else
            cout<<"No"<<endl;

    }

    return 0;
}

