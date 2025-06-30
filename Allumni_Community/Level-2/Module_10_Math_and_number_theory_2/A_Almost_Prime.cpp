#include <bits/stdc++.h>
using namespace std;

vector<int>primes;

void pr()
{
    int n;
    cin>>n;
    vector<bool>allprimes(n, true);
    for(int i=2; i<=n; i++)
    {
        if(allprimes[i])
        {
            for(int j=i+i; j<=n; j+=i)
                allprimes[j] = false; 
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(allprimes[i])
            primes.push_back(i);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pr();

    cout<<primes.size()<<endl;
    for(int i=0; i<primes.size(); i++)
        cout<<primes[i]<<" ";
    cout<<endl;

    return 0;
}

