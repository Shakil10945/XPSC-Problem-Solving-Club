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
        (r%2==0? r--:r);
        (l%2==0? l++:l);
        if(r-l<2)
        {
            cout<<0<<endl;
            continue;
        }

        cout<<ceil((double)(r-l)/4)<<endl;
    }

    return 0;
}

