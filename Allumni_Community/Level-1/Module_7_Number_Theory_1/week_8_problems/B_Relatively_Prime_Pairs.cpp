#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        long long l,r;
        cin>>l>>r;
        long long x = l-1LL;
        cout<<"YES"<<endl;
        for(int i=0; i<=(r-l)/2; i++)
        {
            cout<<++x<<" "<<++x<<endl;
        }

    return 0;
}

