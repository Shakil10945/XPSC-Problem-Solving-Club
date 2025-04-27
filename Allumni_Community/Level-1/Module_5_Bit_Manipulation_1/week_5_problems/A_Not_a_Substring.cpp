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
        string str;
        cin>>str;

        auto it = str.find(")(");

        if(it != -1)
        {
            cout<<"YES"<<endl;
            for(int i=0; i<str.size(); i++)
            {
                cout<<"(";
            }
            for(int i=0; i<str.size(); i++)
            {
                cout<<")";
            }
            cout<<endl;
            continue;
        }

        auto itt = str.find("((");
        auto ittt = str.find("))");
        if(itt != -1 || ittt!=-1)
        {
            cout<<"YES"<<endl;
            for(int i=0; i<str.size(); i++)
            {
                cout<<"()";
            }
            cout<<endl;
            continue;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}

