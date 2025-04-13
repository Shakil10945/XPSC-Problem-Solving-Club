#include <bits/stdc++.h>
using namespace std;

const long long INF = 1000000000000000016LL;

void solveTestCase() {
    long long n, m;
    cin >> n >> m;

    vector<long long> arrayA(n);
    vector<long long> arrayB(m);

    for (long long &value : arrayA) {
        cin >> value;
    }

    for (long long &value : arrayB) {
        cin >> value;
    }

    sort(arrayB.begin(), arrayB.end());

    // Insert -INF at the beginning to simplify comparison
    arrayA.insert(arrayA.begin(), -INF);
    n++;

    for (long long i = 1; i < n; i++) {
        // Custom binary search using manual loop to simulate the original lower_bound with custom comparator
        long long left = 0, right = m, pos = m;
        while (left < right) {
            long long mid = (left + right) / 2;
            if (arrayB[mid] - arrayA[i] < arrayA[i - 1]) {
                left = mid + 1;
            } else {
                pos = mid;
                right = mid;
            }
        }

        if (pos == m) {
            continue;
        }

        long long candidate = arrayB[pos];

        if (arrayA[i] < arrayA[i - 1] && candidate - arrayA[i] < arrayA[i - 1]) {
            continue;
        }

        long long option1 = (arrayA[i] < arrayA[i - 1]) ? INF : arrayA[i];
        long long option2 = (candidate - arrayA[i] < arrayA[i - 1]) ? INF : candidate - arrayA[i];

        arrayA[i] = min(option1, option2);
    }

    if (is_sorted(arrayA.begin(), arrayA.end())) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long testCases;
    cin >> testCases;

    while (testCases--) {
        solveTestCase();
    }

    return 0;
}

