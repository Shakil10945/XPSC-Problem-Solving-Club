#include <bits/stdc++.h>
using namespace std;

int n;
string str;

void input()
{
    cin >> n;
    cin>>str;
}

void solve()
{
    input();
    map<char,int>mp;

    for(auto i = 'a';i<='z'; i++)
    {
        int l=0,r=n-1;
        mp[i]=0;
        while (l<=r)
        {
            if(str[l]==i || str[r]==i)
            {
                if(str[r]!=str[l])
                    mp[i]++;
                
                if(str[l]==i)   l++;
                if(str[r]==i)   r--;
                continue;
            }
            else
            {
                if(str[l]!=str[r])
                {
                    mp[i] = -1;
                    break;
                }
                l++,r--;
            }            
        }
    }

    int count_minus = 0;

    int count_min = INT_MAX;
    for(auto dd: mp)
    {
        if(dd.second==-1)
            count_minus++;
        else
        {
            count_min = min(count_min, dd.second);
        }
        
    }
    if(count_minus==26) cout<<-1<<endl;
    else                cout<<count_min<<endl;


    
    
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