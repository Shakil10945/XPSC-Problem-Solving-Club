#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &x : a) cin >> x;

        int maxScore = 0;

        for (int k = 0; k < n; ++k) {
            int sum = 0;
            for (int i = 0; i < n; ++i) {
                sum += (a[k] ^ a[i]);
            }
            maxScore = max(maxScore, sum);
        }

        cout << maxScore << '\n';
    }

    return 0;
}