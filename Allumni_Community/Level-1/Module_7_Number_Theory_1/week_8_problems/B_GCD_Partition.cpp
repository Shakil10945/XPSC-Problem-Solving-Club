#include <bits/stdc++.h>
using namespace std;

int n;
vector<long long> vec;

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
    
    long long sum = accumulate(vec.begin(),vec.end(),0LL);

    vector<long long> pref_sum;
    pref_sum.push_back(vec[0]);
    for(int i=1; i<n;i++)
        pref_sum.push_back(pref_sum[i-1]+vec[i]);
    

    long long gcd = 0;
    for(int i=0; i<n-1; i++)
    {
        gcd = max(gcd,__gcd(pref_sum[i], sum-pref_sum[i]));
    }
    cout<<gcd<<endl;
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