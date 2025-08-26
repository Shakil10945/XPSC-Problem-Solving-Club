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
        int n;
        cin>>n;

        string str;
        cin>>str;

        int firstPos = -1, lastPos = -1;
        firstPos = str.find('B');
        lastPos = str.rfind('B');
        int ans = lastPos - firstPos +1;

        cout<<ans<<endl;
    }

    return 0;
}

