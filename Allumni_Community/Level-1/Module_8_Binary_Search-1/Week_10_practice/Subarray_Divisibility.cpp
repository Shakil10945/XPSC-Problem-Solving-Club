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

    int prefix_sum = 0;

    map<int, int> mp;
    mp[0]++;
    long long ans = 0;
    for(int i=0; i<n; i++)
    {
        // prefix_sum += (vec[i]%n + n)%n;
        // prefix_sum = prefix_sum%n;

        prefix_sum = (prefix_sum + (vec[i]%n +n)%n)%n;

        ans+=mp[prefix_sum];

        mp[prefix_sum]++;
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