#include <bits/stdc++.h>
using namespace std;

const int maxN = 101;
vector<int>primes[maxN];

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

    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        for(int j=2; j*j<=vec[i]; j++)
        {
            while(vec[i]>1)
            {
                if(vec[i]%j==0)
                {
                    mp[j]++;
                    vec[i] /=j;
                }
                else
                    break;
            }
        }
        if(vec[i]>1)
            mp[vec[i]]++;
    }
    for(auto x: mp)
    {
        if(x.second%n!=0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    // map<int,int>mp;
    // for(int i=0;i<n; i++)
    // {
    //     for(auto x: primes[vec[i]])
    //     {
    //         mp[x]++;
    //     }
    // }

    // for(auto x: mp)
    // {
    //     if(x.second%n !=0)
    //     {
    //         cout<<"NO"<<endl;
    //         return;
    //     }
    // }
    cout<<"YES"<<endl;
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}