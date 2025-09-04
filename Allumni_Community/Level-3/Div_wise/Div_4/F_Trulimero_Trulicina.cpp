#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> LAST(m, -1);

        for (int i = 0; i < n; i++) {
            bool shift = false;
            vector<int> CUR(m);

            for (int j = 0; j < m; j++) {
                int elm = ((i * m + j) % k) + 1;
                if (elm == LAST[j]) {
                    shift = true;
                }
                CUR[j] = elm;
            }

            if (shift) {
                vector<int> temp(m);
                for (int j = 0; j < m; j++) {
                    temp[j] = CUR[(j + 1) % m];
                }
                CUR = temp;
            }

            for (int j = 0; j < m; j++) {
                cout << CUR[j] << (j + 1 == m ? '\n' : ' ');
            }

            LAST = CUR;
        }
    }
    return 0;
}