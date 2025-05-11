#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    long long n, a, b,p,q;
    cin>>n>>a>>b>>p>>q;

    long long pp = (n/a)*p;
    long long qq = (n/b)*q;
    long long ppqq = n/((a/__gcd(a,b))*b);

    cout<<(pp+qq - (ppqq*(p+q))) + (max(p,q)*ppqq)<<endl;


    return 0;
}

