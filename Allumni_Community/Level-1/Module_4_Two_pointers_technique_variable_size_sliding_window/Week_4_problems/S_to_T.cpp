#include <bits/stdc++.h>
using namespace std;

int n;
string s, t;

void input()
{
    cin >> n;
    cin >> s >> t;
}

void solve()
{
    input();

    if(s==t)
    {
        cout<<0<<endl;
        return;
    }
    auto it = find(s.begin(), s.end(), '1');
    auto itt = find(t.begin(), t.end(), '1');

    int s_one = it - s.begin();
    int t_one = itt - t.begin();

    if(s_one != t_one)
    {
        cout<<-1<<endl;
        return;
    }

    set<int>myset;
    for(int i=0; i<n; i++)
    {
        if(s[i] != t[i])
        {
            myset.insert(i);
        }
    }
    int treverse = 0;
    vector<int> ans;
    for(int i=n-1; i>=0; i--)
    {
        if(s[i] =='1')
        {
            if(!myset.empty() && *myset.rbegin()>i)
            {
                int temp_i = i;
                int need_set = *myset.rbegin() - i;
                int x = *myset.rbegin();
                while (need_set--)
                {
                    s[temp_i] = '1';
                    if(s[temp_i]!= t[temp_i])
                    {
                        myset.insert(temp_i);
                    }
                    ans.push_back(temp_i+1);
                    temp_i++;
                }
                if(x!= *myset.rbegin())
                    i=temp_i;
                
                while (!myset.empty() && *myset.rbegin()>i)
                {
                    myset.erase(--myset.end());
                }
            }
        }
    }
    cout<<ans.size()<<endl;
    for(auto x: ans)
        cout<<x<<" ";
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