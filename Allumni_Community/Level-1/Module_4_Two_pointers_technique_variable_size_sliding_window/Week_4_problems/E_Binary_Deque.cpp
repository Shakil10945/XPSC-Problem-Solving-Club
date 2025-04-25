#include <bits/stdc++.h>
using namespace std;

int n, s;
vector<int> vec;

void input()
{
    cin >> n >> s;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    int x = accumulate(vec.begin(), vec.end(), 0);

    if(x<=s)
    {
        cout<<(x== s? 0: -1)<<endl;
        return;
    }

    int l=0, r=0;
    int curr = 0;
    int ans = 0;
    while (r<n)
    {
        curr += vec[r];
        while (curr > s)
            curr -= vec[l++];
        ans = max(ans, r-l+1);
        r++;
    }
    cout<<n-ans<<endl;
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