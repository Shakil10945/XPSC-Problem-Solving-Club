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
        string a;
        cin>>a;

        cout<<(count(a.begin(),a.end(), 'A')>=3? "A": "B")<<endl;
    }

    return 0;
}

