#include <bits/stdc++.h>
using namespace std;

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
    for(auto x: vec)
        mp[x]++;
    
    int ans =0;

    while (!mp.empty())
    {
        int a = mp.begin()->first;
        while (true)
        {
            if(!mp.count(a+1))
            {
                ans++;
                break;
            }
            else
            {
                mp[a+1]--;
                if(mp[a+1] == 0)
                {
                    mp.erase(a+1);
                }                
            }
            a++;
        }
        mp.begin()->second--;
        if(mp.begin()->second == 0)
        {
            mp.erase(mp.begin());
        }      

    }
    
    
    
    cout<<ans<<endl;
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