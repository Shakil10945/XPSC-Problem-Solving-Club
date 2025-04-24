#include <bits/stdc++.h>
using namespace std;

int n;
long long s;
vector<int> vec;

void input()
{
    cin >> n>>s;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    int ans = INT_MAX;
    int l=0, r=0;
    long long sum = 0;

    while (r<n )
    {
        sum+=vec[r];

        while(sum>=s)
        {
            ans = min(ans, r-l+1);
            sum-=vec[l];
            //cout<<"sum up " <<sum<<endl;
            l++;
        }
        r++;
    }
    cout<<(ans == INT_MAX? -1: ans)<<endl;
    
    
    
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