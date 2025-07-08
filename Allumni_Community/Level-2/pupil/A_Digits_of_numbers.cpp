#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> freq(10, 0);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        while (x > 0) {
            int d = x % 10;
            freq[d]++;
            x /= 10;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << (freq[i] % 10);
    }
    cout << endl;

    return 0;
}