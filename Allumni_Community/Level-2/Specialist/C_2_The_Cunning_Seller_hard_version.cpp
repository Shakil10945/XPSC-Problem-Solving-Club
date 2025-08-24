#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<long long> p3;
    p3.push_back(1);

    while (true) 
    {
        __int128 nxt = (__int128)p3.back() * 3;
        if (nxt > ( (__int128)1<<62 ))  break;
        p3.push_back((long long)nxt);
    }

    int t;
    cin>> t;

    while (t--) 
    {
        long long n_input, k;
        cin >> n_input >> k;

        long long n = n_input;

        vector<long long> a;
        long long temp = n;
        
        while (temp > 0) 
        {
            a.push_back(temp % 3);
            temp /= 3;
        }

        if (a.empty())      a.push_back(0);

        int maxI = (int)a.size() - 1;

        long long D = 0;

        for (auto v : a)    D += v;

        if (k < D) 
        {
            cout << -1 << endl;
            continue;
        }


        if (k >= n) 
        {
            cout << 3 * n << endl;
            continue;
        }

        long long dtrgt = min(k, n);
        if (((dtrgt - D) & 1) != 0) dtrgt--;

        if (dtrgt < D)        dtrgt = D;            
        long long spl_nd = (dtrgt - D) / 2;

        __int128 S0 = 0;
        for (int i = 1; i <= maxI; ++i) 
        {
            if (a[i] == 0)      continue;

            __int128 term = (__int128)a[i] * (__int128)i * (__int128)p3[i-1];
            S0 += term;
        }

        if (spl_nd == 0) 
        {
            __int128 ans = (__int128)3 * n + S0;

            cout << (long long)ans << endl;
            continue;
        }

        __int128 rdctn = 0;
        long long need = spl_nd;


        for (int e = maxI - 1; e >= 0 && need > 0; --e) 
        {
            long long M_e = 0;
            for (int i = e + 1; i <= maxI; ++i) 
            {
                if (a[i] == 0)      continue;

                M_e += a[i] * p3[i - e - 1];
            }
            if (M_e == 0)       continue;

            long long take = min(M_e, need);

            rdctn += (__int128)take * (__int128)p3[e];
            need -= take;
        }


        __int128 S = S0 - rdctn;
        __int128 ans = (__int128)3 * n + S;

        cout << (long long)ans << endl;
    }
    return 0;
}
