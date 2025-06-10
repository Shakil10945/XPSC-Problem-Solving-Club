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
    
    if(vec[n-1]==1)
    {
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
    int r =n-1;
    deque<int>dq;
    while (r>=0)
    {
        while (r>=0 && vec[r]==0)
        {
            //cout<<0<<" ";
            dq.push_back(0);
            r--;
        }
        int x =0;
        while (r>=0 && vec[r]==1)
        {
            //cout<<0<<" ";
            x++;
            dq.push_back(0);
            r--;
        }
        dq.pop_back();
        dq.push_back(x);
    }
    for(auto xx: dq)
        cout<<xx<<" ";
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