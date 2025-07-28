#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<long long> vec;

void input() {
    cin >> n >> k;
    vec.resize(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
}

void solve() {
    input();

    vector<int> maxSlot(n);
    for (int i = 0; i < n; i++) 
    {
        if (vec[i] > k) 
        {
            maxSlot[i] = -1;
        } 
        else 
        {
            long long cur = vec[i];
            int j = 0;

            while (cur <= k / 2) 
            {
                cur <<= 1;
                ++j;
            }
            maxSlot[i] = j;
        }
    }

    sort(maxSlot.begin(), maxSlot.end());
    int freeDeletes = 0;
    for (int slot : maxSlot)
     {
        if (slot >= freeDeletes) 
        {
            ++freeDeletes;
        }
    }

    int coins = n - freeDeletes;
    cout << coins << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
