#include <bits/stdc++.h>
using namespace std;

int n;
deque<int> vec;

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
    map<int, int> mymap;
    for(auto value: vec)
        mymap[value]++;
    
    priority_queue<int>pq;
    for(auto x: mymap)
        pq.push(x.second);
    
    while (pq.size() >=2)
    {
        int c = pq.top();
        pq.pop();

        int d= pq.top();
        pq.pop();

        c--;d--;

        if(c)   pq.push(c);
        if(d)   pq.push(d);
    }

    int e = 0;
    while (!pq.empty())
    {
        e+=pq.top();
        pq.pop();
    }
    
    cout<<e<<endl;  
    
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