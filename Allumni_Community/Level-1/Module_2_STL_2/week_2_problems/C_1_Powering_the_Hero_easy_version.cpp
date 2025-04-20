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
    
    priority_queue<int>pq;
    long long sum =0;
    for(int i=0; i<n; i++)
    {
        if(vec[i] != 0)
        {
            pq.push(vec[i]);
        }
        else
        {
            if(!pq.empty())
            {
                sum+=pq.top();
                pq.pop();
            }
        }
    }
    cout<<sum<<endl;
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