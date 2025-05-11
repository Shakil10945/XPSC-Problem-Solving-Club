#include <bits/stdc++.h>
using namespace std;
const long long x = 1e9+7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin>>a>>b;

        long long expo = 1;
        long long temp = a;

        while(b)
        {
            if(b&1LL)
                expo = (expo%x * temp%x)%x;
            temp = (temp%x * temp%x)%x;
            
            b = (b>>1LL);
        }
        cout<<expo<<endl;
        
        
    }

    return 0;
}

