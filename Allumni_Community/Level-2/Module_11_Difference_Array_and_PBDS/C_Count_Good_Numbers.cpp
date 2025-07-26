#include <bits/stdc++.h>
using namespace std;
vector<int> primes = {2, 3, 5, 7};

long long cnt_bd(long long n)
{
    long long cnt = 0;

    int sz = primes.size();

    for (int mask = 1; mask < (1 << sz); mask++) 
    {
        long long lcm = 1;
        int bits = 0;

        
        for (int i = 0; i < sz; ++i) 
        {

            if (mask & (1 << i)) 
            {
                lcm = lcm / __gcd(lcm, (long long)primes[i]) * primes[i];
                bits++;
            }

        }

        long long add = n / lcm;

        if (bits % 2 == 1) cnt += add;

        else cnt -= add;
    }
    return cnt;
}

long long cnt_gd(long long l, long long r) 
{
    long long total = r - l + 1;
    return total - (cnt_bd(r) - cnt_bd(l - 1));
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;
        cout << cnt_gd(l, r) << endl;
    }
    return 0;
}
