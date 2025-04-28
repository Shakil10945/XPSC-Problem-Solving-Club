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
        int n,m;
        cin>>n>>m;

        if(m>n)
        {
            cout<<"No"<<endl;
            continue;
        }
        else
        {
            if(m%2 != n%2)
            {
                cout<<"No"<<endl;
            }
            else
                cout<<"Yes"<<endl;
        }
    }

    return 0;
}

