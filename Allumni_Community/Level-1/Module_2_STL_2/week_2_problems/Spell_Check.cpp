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
        string t = "Timur";
        sort(t.begin(),t.end());
        int n;cin>>n;
        string str;
        cin>>str;

        sort(str.begin(),str.end());

        cout<<(str==t ? "YES": "NO")<<endl;
    }

    return 0;
}

