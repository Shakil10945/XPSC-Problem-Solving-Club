#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5+9;
vector<bool>isPrime(maxN, true);
void sieve()
{
    for(int i=2; i<=maxN; i++)
    {
        if(isPrime[i])
            for(int j=i+i; j<=maxN; j+=i)
                isPrime[j] = false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int n;
    cin>>n;

    cout<<(n>2? 2: 1)<<endl;

    for(int i=2; i<=n+1; i++)
        cout<<(isPrime[i]? 1: 2)<<" ";
    cout<<endl;
    return 0;
}

