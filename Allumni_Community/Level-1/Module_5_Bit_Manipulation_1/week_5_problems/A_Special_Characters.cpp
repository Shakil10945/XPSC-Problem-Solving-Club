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
        int n;
        cin>>n;

        if(n%2==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
            cout<<"YES"<<endl;
        bool check = false;
        for(int i=1; i<=n; i+=2)
        {
            if(check)
            {
                cout<<"AA";
                check = false;
            }
            else
            {
                cout<<"BB";
                check = true;
            }
        }
        cout<<endl;
    }

    return 0;
}

