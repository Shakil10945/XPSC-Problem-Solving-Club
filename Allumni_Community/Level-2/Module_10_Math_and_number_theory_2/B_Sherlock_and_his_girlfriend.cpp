#include <bits/stdc++.h>
using namespace std;

const int maxN=1e5+2;
vector<int>allPrimes;
vector<bool> check_Primes(maxN, true);

void sieve()
{
    check_Primes[1]=false;
    for(int i=2; i<=maxN; i++)
    {
        if(check_Primes[i])
            for(int j=i+i; j<=maxN; j+=i)
                check_Primes[j]=false;
    }
    for(int i=2; i<=maxN; i++)
        if(check_Primes[i])
            allPrimes.push_back(i);
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int n;
    cin>>n;

    map<int,vector<int>>mp;
    for(int i=2; i<=n+1; i++)
    {
        for(int j=0; j<allPrimes.size(); j++)
        {
            if(i%allPrimes[j]==0)
            {
                mp[allPrimes[j]].push_back(i);
                break;
            }
        }
    }

    vector<int>ans(n+2);

    int z = 1;
    for(auto x: mp)
    {
        if(x.second.size()>1)
        {
            for(auto y: x.second)
            {
                ans[y] = z;
            }
            z++;
        }
    }
    for(auto x: mp)
    {
        if(x.second.size()==1)
        {
            for(auto y: x.second)
            {
                ans[y] = z;
            }
            //z++;
        }
    }
    cout<<z<<endl;

    sort(ans.begin()+2, ans.end());

    for(int i=2; i<n+2; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;


    return 0;
}

