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
    
    multiset<int> myset;
    for(auto x: vec)
        myset.insert(x);
    int x = 0;
    for(int i=1; i<=n; i++)
    {
        auto lb = myset.lower_bound(i);
        if(lb == myset.end())
        {
            break;
        }
        else
        {
            myset.erase(lb);

        }
        x++;
    }
    cout<<x<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    //cin >> t;
    //while (t--)
        solve();

    return 0;
}