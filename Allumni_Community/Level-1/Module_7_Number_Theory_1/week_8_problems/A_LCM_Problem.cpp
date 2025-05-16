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
        if(r<l*2)
        {
            cout<<-1<<" "<<-1<<endl;
        }
        else
        {
            cout<<l<<" "<<l*2<<endl;
        }
    }

    return 0;
}

