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
        string a, b;    cin>>a>>b;

        if(a==b)
        {
            cout<<"YES"<<endl;
            continue;
        }

        int a1 = a.find('1');
        int b1 = b.find('1');

        if(b1 == -1)
        {
            cout<<"YES"<<endl;
        }
        else if(a1 == -1 && b1 != -1)
        {
            cout<<"NO"<<endl;
        }
        else if(b1 < a1)
        {
            cout<<"NO"<<endl;
        }
        else 
        {
            cout<<"YES"<<endl;
        }

    }

    return 0;
}

