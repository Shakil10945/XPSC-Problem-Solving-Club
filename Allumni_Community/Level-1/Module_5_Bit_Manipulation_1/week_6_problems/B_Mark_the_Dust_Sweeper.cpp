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
    
    int r =0;
    int cnt = 0;

    while (r<n-1)
    {
        if(vec[r]!= 0)
        {
            while (r<n-1)
            {
                if(vec[r] == 0) cnt++;
                r++;
            }
            
        }
        r++;
    }

    long long x = accumulate(vec.begin(), --vec.end(), 0LL);

    if(!x)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<x+cnt<<endl;
    }
    
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