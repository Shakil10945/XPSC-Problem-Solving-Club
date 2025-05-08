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
        int a, b;   cin>>a>>b;
        int c,d;    cin>>c>>d;

        if((a<b && c<d) || (a>b && c>d))
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}

