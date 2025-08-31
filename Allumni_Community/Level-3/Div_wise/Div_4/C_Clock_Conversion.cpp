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

        if(str.substr(0,2) == "00")
        {
            str[0] = '1';
            str[1] = '2';
            cout<<str<<" AM"<<endl;
        }
    }

    return 0;
}

