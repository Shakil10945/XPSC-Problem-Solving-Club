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

    map<int, int>bit_map;

    for(int i=0; i<n;i++)
    {
        for(int j=0; j<31; j++)
        {
            if((vec[i]>>j)&1) bit_map[j]++;
            else
                bit_map[j] = bit_map[j];
        }
    }
    
    for(int i=30; i>=0; i--)
    {
        if(n-bit_map[i]<=k)
        {
            k-= (n-bit_map[i]);
            bit_map[i]=n;
        }
    }
    
    long long ans = (1<<31)-1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<31; j++)
        {
            if(bit_map[j] == n)
                vec[i] = (vec[i]| (1<<j));
        }
        ans &= vec[i];
    }
    cout<<ans<<endl;
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