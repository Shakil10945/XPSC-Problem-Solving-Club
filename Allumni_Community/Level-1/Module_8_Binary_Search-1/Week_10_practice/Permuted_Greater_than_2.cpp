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
        int a, b,c; cin>>a>>b>>c;

        if(!c && a)
        {
            cout<<"No"<<endl;
        }
        else if((c>=a) || ((a==(c+1)) && !b))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }

    return 0;
}

