#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

template<class T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int getMedian(pbds<int>& s) {
    int k = s.size();
    return *s.find_by_order((k - 1) / 2); // 0-indexed
}

int solve(vector<int>& a) {
    int n = a.size();
    int ans = 0;

    for (int min_val = 1; min_val <= 100; ++min_val) {
        pbds<int> window;
        int l = 0;

        for (int r = 0; r < n; ++r) {
            if (a[r] < min_val) {
                window.clear();
                l = r + 1;
                continue;
            }
            window.insert(a[r]);
            int med = getMedian(window);
            ans = max(ans, med - min_val);
        }
    }

    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        cout << solve(a) << '\n';
    }
}