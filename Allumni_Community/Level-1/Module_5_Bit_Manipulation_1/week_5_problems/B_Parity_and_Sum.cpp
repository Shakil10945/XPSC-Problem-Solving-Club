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

    set<int> myset;
    for(auto x: vec)
        myset.insert(x%2);
    if(myset.size()==1)
    {
        cout<<0<<endl;  return;
    }

    long long biggest_odd = 0;
    vector<int> pq;
    for(auto &x: vec)
    {
        if(x%2==1)
            biggest_odd = max(biggest_odd, (long long)x);
        else        pq.push_back(x);
    }

    sort(pq.begin(), pq.end());

    long long all = biggest_odd;

    for(int i=0; i<pq.size(); i++)
    {
        if((long long)pq[i] > all)
        {
            cout<<pq.size()+1<<endl;
            return;
        
        }
        all+=pq[i];
    }
    cout<<pq.size()<<endl;
    
    
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