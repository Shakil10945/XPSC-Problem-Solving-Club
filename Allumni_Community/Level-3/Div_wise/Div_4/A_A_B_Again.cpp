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

        cout<<str[0]-'0' + str[1]-'0'<<endl;
    }

    return 0;
}

