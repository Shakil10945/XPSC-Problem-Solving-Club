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

    
    int x = 0;
    int l = 0, r= 0;
    bool mood = true;
    while(r<n)
    {
        if(vec[r]==0)
        {
            while(r<n && vec[r]==0)
            {
                r++;
                if(r-l==k)
                {
                    r++;
                    l = r;
                    x++;
                }
            }
        }
        else
        {
            r++;
            l=r;
        }
        
    }
    cout<<x<<endl;
    
    
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