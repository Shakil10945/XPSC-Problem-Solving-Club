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
        int n,m,l,r;
        cin>>n>>m>>l>>r;

        //nt x = (n-m)/2;

        if(m>r)
        {
            cout<<r-m<<" "<<r<<endl;
        }
        else
        {
            cout<<0<< " "<<m<<endl;
        }

        

    }

    return 0;
}

