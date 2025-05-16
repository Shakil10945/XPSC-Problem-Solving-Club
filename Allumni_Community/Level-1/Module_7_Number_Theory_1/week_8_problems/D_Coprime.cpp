#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;
unordered_map<int,set<int>>copprime;

void make_coprime()
{
    for(int i=1; i<=1000; i++)
    {
        for(int j=1; j<=1000; j++)
        {
            if(__gcd(i,j)==1)
                copprime[i].insert(j);
        }
    }
}

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
    
    unordered_map<int,int>mp;
    for(int i=0; i<n;i++)
    {
        mp[vec[i]] = i+1;
    }
    int gcd = 0;

    for(auto dd: mp)
    {
        for(auto xx: copprime[dd.first])
        {
            if(mp.count(xx))
            {
                gcd = max(gcd, mp[xx]+dd.second);
            }
        }
    }
    // for(int i=0;i<n; i++)
    // {
    //     for(auto xx: copprime[vec[i]])
    //     {
    //         if(mp[xx]>0)
    //         {
    //             gcd = max(gcd, mp[xx]+mp[vec[i]]);
    //         }
    //     }
    // }
    if(gcd)
        cout<<gcd<<endl;
    else
        cout<<-1<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    make_coprime();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}