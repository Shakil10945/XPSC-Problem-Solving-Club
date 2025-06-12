#include <bits/stdc++.h>
using namespace std;

class Compare
{
    public:
        bool operator()(char a, char b)
        {
            if(a==b) return false;
            if(a=='.')  return false;
            if(b=='.')  return true;
            return false;
        }

};

void solve()
{
    int n, m;
    cin>>n>>m;

    vector<string>vec(n);
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;

        vec[i]=str;
    }

    vector<priority_queue<char>>ans(m);

    for(int i=0;i<m; i++)
    {
        priority_queue<char, vector<char>, Compare> pq;
        for(int j=0; j<n; j++)
        {
            pq.push(vec[j][i]);
        }
        ans[i]= pq;

    }
    for(int j=0; j<n; j++)
    {
        for(int i=0; i< m; i++)
    {
        cout<<ans[i].top();
        ans[i].pop();
    }
    }
    
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

