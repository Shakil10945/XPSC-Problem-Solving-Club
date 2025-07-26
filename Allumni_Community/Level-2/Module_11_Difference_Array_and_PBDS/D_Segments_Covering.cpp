#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;



long long mdp(long long a, long long ex=MOD-2) 
{
    long long r = 1;
    while (ex) 
    {
        if (ex & 1) r = r * a % MOD;
        a = a * a % MOD;
        ex >>= 1;
    }
    return r;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;


    vector<vector<pair<int,int>>> endAt(m+1);
    long long totalFactor = 1;

    for (int i = 0; i < n; i++) {
        long long l, r, p, q;
        cin >> l >> r >> p >> q;

        long long invQ = mdp(q);


        long long oneMinus = (q - p) % MOD * invQ % MOD;

        totalFactor = totalFactor * oneMinus % MOD;


        long long invQmp = mdp((q - p + MOD) % MOD);
        long long wi = p % MOD * invQmp % MOD;



        endAt[r].push_back({int(l), int(wi)});
    }


    vector<long long> dp(m+1, 0);
    dp[0] = 1;

    for (int j = 1; j <= m; j++) 
    {
        long long sum = 0;



        for (auto &seg : endAt[j]) 
        {
            int l = seg.first;
            long long w = seg.second;
            sum = (sum + dp[l-1] * w) % MOD;
        }



        dp[j] = sum;
    }


    long long ans = totalFactor * dp[m] % MOD;
    cout << ans <<endl;
    return 0;
}
