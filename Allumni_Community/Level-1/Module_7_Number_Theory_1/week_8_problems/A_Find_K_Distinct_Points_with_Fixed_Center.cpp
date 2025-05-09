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
        int x,y,z;
        cin>>x>>y>>z;
        if(z%2==1)
        {
            cout<<x<<" "<<y<<endl;
            z--;
        }
        int i=1;
        while(z>0)
        {
            cout<<x+i<<" "<<y+i<<endl;
            cout<<x-i<<" "<<y+i<<endl;
            z-=2;
            i++;
        }
    }

    return 0;
}

