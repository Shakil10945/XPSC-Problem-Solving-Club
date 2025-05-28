#include <bits/stdc++.h>
using namespace std;

int n, k;
deque<int> vec;

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

    for(int i=0; i<n; i++)
    {
        mp[vec[i]]++;
        //cout<<" "<<" "<<mp[vec[i]]<<" ";
    }
    int x;
    for(int i=0;i<=n; i++)
    {
        if(mp[i]==0)
            x = i;
    }
    //cout<<x<<" Hi"<<endl;
    k = (k%(n+1));
    if(k)
    {
        vec.push_front(x);
        //vec.pop_back();
        k--;
        while (k--)
        {
            vec.push_front(vec.back());
            vec.pop_back();
        }
        vec.pop_back();
    }
    //cout<<x<<endl;
    
    for(auto dd: vec)
        cout<<dd<<" ";
    cout<<endl;

    vec.clear();
    mp.clear();
    
    
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