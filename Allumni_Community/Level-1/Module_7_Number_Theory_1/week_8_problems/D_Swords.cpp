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
    if(n==2)
    {
        cout<<1<<" "<<abs(vec[0]-vec[1])<<endl;
        return;
    }

    long long gcd=0,lcm=1;

    for(int i=0; i<n;i++)
    {
        gcd = GCD(gcd,vec[i]);
        lcm = LCM(lcm, vec[i]);
    }

    long long y=0;
    for(int i=0;i<n; i++)
    {
        y+=((lcm-vec[i])/gcd);
    }
    cout<<y<<" "<<gcd<<endl;
    
    
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