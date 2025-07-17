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
        int x = 9;
        for(int i=0; i<str.size(); i++)
        {
            x = min(x, str[i]-'0');
        }
        cout<<x<<endl;
    }

    return 0;
}

