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
        sort(str.begin(),str.end());
        reverse(str.begin(),str.end());

        cout<<str<<endl;
    }

    return 0;
}

