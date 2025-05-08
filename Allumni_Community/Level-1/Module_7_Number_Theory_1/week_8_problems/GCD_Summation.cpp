#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        if (k < n - 1) {
            cout << -1 << endl;
        } else {
            k -= (n - 2);
            vector<int> ans;
            ans.push_back(k);
            ans.push_back(2 * k);
            for (int i = 2 * k + 1; i < 2 * k + n - 1; ++i) {
                ans.push_back(i);
            }

            for (int i = 0; i < ans.size(); ++i) {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}