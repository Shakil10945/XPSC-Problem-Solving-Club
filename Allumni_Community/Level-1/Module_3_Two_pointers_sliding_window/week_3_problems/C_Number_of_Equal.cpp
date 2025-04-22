#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> vec;
vector<int> vec2;

void input()
{
    cin >> n >> m;
    vec.resize(n);
    vec2.resize(m);

    for (int i = 0; i < n; i++)
        cin >> vec[i];

    for (int i = 0; i < m; i++)
        cin >> vec2[i];
    
}

void solve()
{
    input();

    int l=0, r=0;
    long long ans =0;

    while(l<n && r<m)
    {
        int current = vec[l], cnt1=0, cnt2=0;
        while (l<n && vec[l]==current)
        {
            cnt1++; l++;
        }
        while (r<m && vec2[r] < current)
        {
            r++;
        }
        while (r<m && vec2[r]==current)
        {
            cnt2++; r++;
        }
        ans+= 1LL* cnt1* cnt2;
    }
    cout<<ans<<endl;
    
    
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