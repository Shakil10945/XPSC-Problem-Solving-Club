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
        int a,b, c, d;
        cin>>a>>b>>c>>d;

        int x = a*5 + b, y = c*5+d;

        if(x==y || (x>y && (x-y)%6==0))
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
            cout<<"NO"<<endl;

    }

    return 0;
}

