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
        cout<<((str[0] == 'a' || str[1]=='b' || str[2] == 'c')? "YES": "NO")<<endl;
    }

    return 0;
}

