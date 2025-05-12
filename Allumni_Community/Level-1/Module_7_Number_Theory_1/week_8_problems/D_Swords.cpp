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
long long GCD(long long a, long long b)
{
    return __gcd(a,b);
}
long long LCM(long long a,long long b)
{
    return((a/GCD(a,b))*b);
}
//9,999,999,987
void solve()
{
    input();
    
    long long maxx = *max_element(vec.begin(),vec.end());

    long long gcd= 0;

    for(int i=0; i<n;i++)
    {
        gcd = GCD(gcd,maxx-vec[i]);
    }

    long long y = maxx*n-accumulate(vec.begin(),vec.end(),0LL);
    cout<<y/gcd<<" "<<gcd<<endl;
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while (t--)
        solve();

    return 0;
}