#include <bits/stdc++.h>
using namespace std;

int n;
long long s;
vector<int> vec;

void input()
{
    cin >> n >> s;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve() {
    input();                 
    int l=0, r=0;
    long long sum =0, ans=0;

    while (r<n)
    {
        sum += vec[r];

        while (sum>=s)
        {
            sum-=vec[l++];
        }
        ans += l;
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