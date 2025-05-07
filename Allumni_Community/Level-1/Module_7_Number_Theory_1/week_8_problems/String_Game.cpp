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
        int n; cin>>n;
        string str;
        cin>>str;

        int one = count(str.begin(), str.end(), '1');
        int zero = count(str.begin(), str.end(), '0');

        cout<<(min(one,zero)%2==0 ? "Ramos": "Zlatan")<<endl;
    }

    return 0;
}

