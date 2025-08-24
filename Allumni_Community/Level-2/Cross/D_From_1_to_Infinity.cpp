#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
using i128 = __int128_t;

vector<i128> p10;

i128 digitsUpTo(int64 n) 
{
    if (n <= 0) return 0;
    int len = to_string(n).size();
    i128 res = 0;
    for (int d = 1; d < len; ++d) {
        res += (i128)9 * p10[d-1] * d;
    }
    res += (i128)(n - (int64)p10[len-1] + 1) * len;
    return res;
}

// sum of digits of all numbers from 0..n (so for 1..n it's same because sumDigits(0)=0)
i128 sumDigitsUpTo(int64 n) 
{
    if (n <= 0) return 0;

    i128 res = 0;

    for (int p = 0; ; ++p) 
    {
        i128 factor = p10[p];

        if (factor > n) 
            break;

        i128 tenf = factor * 10;
        i128 higher = (i128)n / tenf;
        int cur = (int)(( (i128)n / factor ) % 10);
        i128 lower = (i128)n % factor;

        res += higher * 45 * factor;
        res += (i128)(cur) * (cur - 1) / 2 * factor;
        res += (i128)cur * (lower + 1);
    }

    return res;
}

string i128_to_string(i128 x)
{
    if (x == 0) return "0";
    bool neg = false;
    if (x < 0) { neg = true; x = -x; }
    string s;
    while (x > 0) {
        int digit = (int)(x % 10);
        s.push_back('0' + digit);
        x /= 10;
    }
    if (neg) s.push_back('-');
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // prepare powers of 10
    p10.assign(20, 0);
    p10[0] = 1;
    for (int i = 1; i < 20; ++i) p10[i] = p10[i-1] * 10;

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long k;
        cin >> k;

        // binary search for minimal n with digitsUpTo(n) >= k
        long long lo = 0, hi = (long long)1e15; // safe upper bound
        while (lo < hi) {
            long long mid = lo + (hi - lo) / 2;
            if (digitsUpTo(mid) >= (i128)k) hi = mid;
            else lo = mid + 1;
        }

        long long n = lo;
        long long m = n - 1;
        i128 used_by_m = digitsUpTo(m); // digits used by 1..m
        long long rem = (long long)((i128)k - used_by_m); // remaining digits from n (0..len(n))

        i128 ans = sumDigitsUpTo(m);

        if (rem > 0) {
            string s = to_string(n);
            // take first rem digits of n (leftmost rem)
            for (int i = 0; i < rem; ++i) ans += (s[i] - '0');
        }
        cout << i128_to_string(ans) << '\n';
    }

    return 0;
}
