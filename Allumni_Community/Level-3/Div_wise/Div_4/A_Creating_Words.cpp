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
        string a, b;

        cin>>a>>b;

        cout<<b[0]<<a.substr(1)<< " "<<a[0]<<b.substr(1)<<endl;
    }

    return 0;
}

