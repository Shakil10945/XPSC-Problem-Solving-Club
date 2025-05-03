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
    
    int maxxk = *max_element(vec.begin(),vec.end());
    int maxx = *max_element(vec.begin(),vec.end());
    for(auto x: vec)
        maxx|=x;

    set<int>off_bit;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<31; j++)
        {
            if(!((vec[i]>>j)&1))
                off_bit.insert(j);
        }
    }
    int d = vec[0];
    for(auto x: vec)
        d &=x;
    cout<<maxx-d<<endl;

    for(int i=0; i<n; i++)
    {
        if(vec[i]== maxxk)  continue;
        for(int j=0;j<31;j++)
        {
            if((vec[i]>>j)&1)
            {
                if(off_bit.count(j))
                {
                    vec[i] = ((~(vec[i]>>j))&1);
                }
            }
        }
    }

   // cout<<maxx - *min_element(vec.begin(),vec.end())<<endl;





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