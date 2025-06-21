#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> vec;

void input()
{
    cin >> n >> k;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
}

void solve()
{
    input();

    map<int, vector<int>>mp;

    for(int i=0;i<n; i++)
        mp[vec[i]].push_back(i);

    int l = 0, r= 0;
    int sum = 0;
    bool check = false;
    while(l<n)
    {
        if(check)   break;
        r  = 0;
        while(r<n)
        {
            if(check)   break;
            if(r==l)
            {
                r++;    continue;
            }
            sum = vec[l]+vec[r];

            int rem = k-sum;
            if(rem<=0)
            {
                r++;
                continue;
            }
            else
            {
                auto it = mp.lower_bound(rem);
                if(it==mp.end() || it->first!=rem)
                {
                    r++;
                    continue;
                }
                if(it!=mp.end() && it->first == rem)
                {
                    for(auto d: it->second)
                    {
                        if(d!=r && d!=l)
                        {
                            check = true;
                            cout<<d+1<<" "<<r+1<<" "<<l+1<<endl;
                            break; 
                        }
                    }
                }
                r++;
            }
        }
        l++;
    }
    if(!check)  cout<<"IMPOSSIBLE"<<endl;    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}