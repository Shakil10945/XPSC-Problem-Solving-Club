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

        int x = stoi(str.substr(0,2));

        if(x<12)
        {
            if(x==0)
                cout<<"12"<<str.substr(2)<<" AM"<<endl;
            else
                cout<<str<<" AM"<<endl;
        }
        else if(x==12)
            cout<<str<<" "<<"PM"<<endl;
        else
        {
            cout<<((x-12 <=9)? "0": "")<<x-12<<str.substr(2)<<" PM"<<endl;
        }
    }

    return 0;
}

