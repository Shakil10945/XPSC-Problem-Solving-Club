#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n==1)    return true;
    for(int i=2; i*i<=n;i++)
    {
        //cout<<"HI"<<endl;
        if(!(n%i))
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;  cin>>n;

    if(isPrime(n))
        cout<<1<<endl;
    else if(!(n%2))
        cout<<2<<endl;
    else
    {
        if(isPrime(n-2))
            cout<<2<<endl;
        else
            cout<<3<<endl;
    }


    return 0;
}

