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
        int l,r;
        cin>>l>>r;

        if(r<=3)
        {
            cout<<-1<<endl;
            continue;
        }
        if(l==r)
        {
            bool ch = false;
            for(int i=2; i*i<=r; i++)
            {
                if(r%i==0)
                {
                    cout<<i<<" "<<r-i<<endl;
                    ch = true;
                    break;
                }
            }
            if(!ch) cout<<-1<<endl;
            continue;
        }
        if(r%2) r--;
        cout<<2<<" "<<r-2<<endl;
    }

    return 0;
}

