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
    
    int c = count(vec.begin(),vec.end(),vec[0]);

    set<int>mset;
    for(int i=0; i<n; i++)
    {
        mset.insert(vec[i]);
        if(mset.size()==2)  break;
    }

    int cnt = 0;
    set<int>cset;
    for(int i=0; i<n; i++)
    {
        if(mset.count(vec[i]))
            cset.insert(vec[i]);
        if(mset==cset)
        {
            cnt++;
            cset.clear();
        }
    }
    cout<<(cnt>c? cnt: c)<<endl;
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