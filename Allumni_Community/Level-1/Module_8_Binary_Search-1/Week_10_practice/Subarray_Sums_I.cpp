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

    int ans = 0;
    int l = 0, r= 0;
    int sum =0;
    while(r<n)
    {
        sum+=vec[r];
        while (l<n && l<=r && sum>k)
        {
            sum-=vec[l];
            l++;
        }
        if(sum==k)
            ans++;
        r++;
    }
    cout<<ans<<endl;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}