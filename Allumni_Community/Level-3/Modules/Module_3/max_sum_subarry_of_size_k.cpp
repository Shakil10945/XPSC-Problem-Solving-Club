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

long long maximumSumSubarry(vector<int> & a, int k)
{
    int n = a.size(), l=0, r= 0;
    long long ans = 0, sum = 0;
    while(r<n)
    {
        sum+=a[r];
        if(r-l+1 == k)
        {
            ans = max(ans, sum);
            sum -= a[l];
            l++, r++;
        }
        else
            r++;
    }
    return ans;
}
void solve()
{
    input();
    
    long long x = maximumSumSubarry(vec, vec.size());
    
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