#include <bits/stdc++.h>
using namespace std;

long long n, k;
vector<long long> vec;

void input()
{
    cin >> n >> k;
    vec.resize(n);

    for (long long i = 0; i < n; i++)
        cin >> vec[i];
}

void solve()
{
    input();

    sort(vec.begin(), vec.end());

    long long sum = accumulate(vec.begin(), vec.end(), 0LL);

    if(vec[0]==vec[1])
    {
        sum = (sum + (vec[0] * k*1LL));
        cout << sum << endl;
        return;
    }

    long long x = (vec[0]+1)*1LL;
    long long y = vec[1];
    
    while(k )
    {
        if(y<=x)  break;

        long long z = (vec[0]+y+1)/2;

        sum+=z;

        y = z;
        k--;
    }

    sum = (sum + (x * k));
    cout << sum << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}