// #include <bits/stdc++.h>
// using namespace std;

// int k, n;
// vector<int> vec;

// void input() {
//     cin >> k >> n;
//     vec.resize(n);
//     for (int i = 0; i < n; i++)
//         cin >> vec[i];
// }

// void solve() {
//     input();

//     sort(vec.begin(), vec.end());  // sort mice positions

//     int l = 0, r = n, ans = 0;

//     // Binary search on how many mice we can save
//     while (l <= r) {
//         int mid = (l + r) / 2;

//         // Pick the last `mid` mice (i.e. closest to the hole)
//         long long totalTime = 0;
//         bool canSave = true;
//         for (int i = 0; i < mid; ++i) {
//             int idx = n - mid + i;
//             totalTime += (k - vec[idx]);  // Time this mouse takes to reach hole
//             if (totalTime >= k) {
//                 canSave = false;
//                 break;
//             }
//         }

//         if (canSave) {
//             ans = mid;  // Try to save more mice
//             l = mid + 1;
//         } else {
//             r = mid - 1;  // Try saving fewer mice
//         }
//     }

//     cout << ans << '\n';
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//         solve();

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int k, n;
vector<int> vec;

void input() {
    cin >> k >> n;
    vec.resize(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
}

void solve() {
    input();

    sort(vec.begin(), vec.end());

    int l = 0, r = n, ans = 0;

    auto ok = [&](int mid) -> bool {
        long long totalTime = 0;
        for (int i = 0; i < mid; ++i) {
            int idx = n - mid + i; // pick the rightmost `mid` mice
            totalTime += (k - vec[idx]);
            if (totalTime >= k)
                return false;
        }
        return true;
    };

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (ok(mid)) {
            ans = mid;     // try to save more mice
            l = mid + 1;
        } else {
            r = mid - 1;   // try fewer
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}