#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> vec;

void input()
{
    cin >> n>>k;
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
    
    priority_queue<int>pq;
    for(auto x: mp)
        pq.push(x.second);
    
    while (pq.top()>=k)
    {
        int x = pq.top();

        pq.pop();
        pq.push(x-k);
        int y =pq.top();
        pq.pop();
        pq.push(y+(k-1));
    }

    int ans = 0;
    while (!pq.empty())
    {
        ans+=pq.top();
        pq.pop();
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