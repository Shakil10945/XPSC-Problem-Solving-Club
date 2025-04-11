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
        int a, aa, b, bb;
        cin>>a>>aa>>b>>bb;

        int x = 0;
        if(a > b && aa > bb)    x+=2;
        if(a>bb && aa > b)      x+=2;

        cout<<x<<endl;
    }

    return 0;
}

