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
        int n;  cin>>n;
        string str; cin>>str;

        string rev = str;
        reverse(rev.begin(),rev.end());

        cout<<(str<=rev? str: rev+str)<<endl;
    }

    return 0;
}

