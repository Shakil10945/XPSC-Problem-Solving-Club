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
        int a, b, c;
        cin>>a>>b>>c;

        if((a+b+c)%3 !=0)
        {
            cout<<"NO"<<endl;
            continue;
        }

        if(c-b >= b-a)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}

