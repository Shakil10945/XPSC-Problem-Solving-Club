#include <bits/stdc++.h>
using namespace std;
vector<__int128> p10;

__int128 dut(long long n) 
{
    if (n <= 0)     return 0;

    int len = to_string(n).size();
    __int128 res = 0;

    for (int d = 1; d < len; ++d)
        res += (__int128)9 * p10[d-1] * d;

    res += (__int128)(n - (long long)p10[len-1] + 1) * len;

    return res;
}

__int128 sumDUT(long long n) 
{
    if (n <= 0)     return 0;
    __int128 res = 0;

    for (int p = 0; ; ++p) 
    {
        __int128 factor = p10[p];
        if (factor > n)     break;

        __int128 tenf = factor * 10;
        __int128 higher = (__int128)n / tenf;

        int cur = (int)(( (__int128)n / factor ) % 10);
        __int128 lower = (__int128)n % factor;

        res += higher * 45 * factor;
        res += (__int128)(cur) * (cur - 1) / 2 * factor;
        res += (__int128)cur * (lower + 1);
    }

    return res;
}

string final_str(__int128 x) 
{
    if (x == 0)     return "0";
    bool neg = false;

    if (x < 0)  
    {
        neg = true;
        x = -x; 
    }

    string s;

    while (x > 0) 
    {
        int digit = (int)(x % 10);
        s.push_back('0' + digit);

        x /= 10;
    }

    if (neg)     s.push_back('-');

    reverse(s.begin(), s.end());
    return s;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    p10.assign(20, 0);
    p10[0] = 1;
    for (int i = 1; i < 20; i++) 
        p10[i] = p10[i-1] * 10;

    int t;
    cin >> t;

    while (t--) 
    {
        long long k;
        cin >> k;

        
        long long lo = 0, hi = (long long)1e15;

        while (lo < hi) 
        {
            long long mid = lo + (hi - lo) / 2;

            if (dut(mid) >= (__int128)k)     hi = mid;
            else        lo = mid + 1;

        }

        long long n = lo;
        long long m = n - 1;

        __int128 used_by_m = dut(m);

        long long rem = (long long)((__int128)k - used_by_m);

        __int128 ans = sumDUT(m);

        if (rem > 0) 
        {
            string s = to_string(n);
    
            for (int i = 0; i < rem; ++i) 
                ans += (s[i] - '0');
        }
        cout << final_str(ans) << endl ;
    }

    return 0;
}
