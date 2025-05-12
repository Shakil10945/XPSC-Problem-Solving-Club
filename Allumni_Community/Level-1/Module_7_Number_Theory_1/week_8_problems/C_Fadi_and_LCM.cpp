#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x;    cin>>x;

    long long a,b;
    for(long long i=1; i*i<=x;i++)
    {
        if(x%i==0)
        {
            if(x== ((i/(__gcd(i,(x/i))))*(x/i)))
            {
                a=i;
                b=x/i;
            }
        }
    }

    cout<<a<<" "<<b<<endl;

    return 0;
}

