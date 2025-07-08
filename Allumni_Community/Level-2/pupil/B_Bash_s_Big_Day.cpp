#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5+9;
vector<bool> isPrime(maxN, true);
vector<int> allprime;

void sieve()
{
    for(int i=2; i<=maxN; i++)
    {
        if(isPrime[i])
        {
            for(int j=i+i; j<=maxN; j+=i)
                isPrime[j]= false;
        }
    }
    for(int i=2; i<=maxN;i++)
    {
        if(isPrime[i])
            allprime.push_back(i);
    }
}

int n;
vector<int> vec;

void input()
{
    cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
       cin >> vec[i];
    
}

void solve()
{
    input();

    sieve();
    int cnt = 0;
    map<int,int>mp;

    for(int i=0; i<n; i++)
    {
        int x = vec[i];
        for(int j=2;j*j<=x; j++)
        {
            
            if(x%j==0)
            {
                mp[j]++;
                while (x%j==0)
                {
                    x/=j;
                }
            }
        }
        if(x>1)     mp[x]++;
    }
    mp[1]=1;
    for(auto x: mp)
    {
        cnt= max(cnt, x.second);
    }
    
    cout<<cnt<<endl;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}