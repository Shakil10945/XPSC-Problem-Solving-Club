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
        int a, b;
        cin>>a>>b;
        if(b==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;

        cout<<1LL*a*b<<" "<<a<<" "<< (long long) a + (1LL*a*b)<<endl;
    }

    return 0;
}

