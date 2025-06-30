#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;
vector<int>primes = {2,3,5,7,11,13,17,19,23,29,31};

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
    
    map<int,vector<int>>mp;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<11;j++)
        {
            if(vec[i]%primes[j]==0)
            {
                mp[primes[j]].push_back(i);
                break;
            }
        }
    }
    cout<< mp.size()<<endl;
    vector<int>ans(n);
    int cnt = 1;
    for(auto dd: mp)
    {
        for(auto x: dd.second)
            ans[x] = cnt;
        cnt++;
    }
    for(auto d: ans)
        cout<<d<<" ";
    cout<<endl;
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