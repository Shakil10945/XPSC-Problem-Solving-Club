#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> points(n);  // Store (x, y)
        for (int i = 0; i < n; ++i) {
            cin >> points[i].first >> points[i].second;
        }

        // Store original indices
        vector<int> indices(n);
        for (int i = 0; i < n; ++i) indices[i] = i;

        // Sort by x
        vector<int> xSorted = indices;
        sort(xSorted.begin(), xSorted.end(), [&](int a, int b) {
            return points[a].first < points[b].first;
        });

        // Sort by y
        vector<int> ySorted = indices;
        sort(ySorted.begin(), ySorted.end(), [&](int a, int b) {
            return points[a].second < points[b].second;
        });

        // Divide into 4 groups based on x and y halves
        set<int> xLeft(xSorted.begin(), xSorted.begin() + n/2);
        set<int> xRight(xSorted.begin() + n/2, xSorted.end());
        set<int> yLeft(ySorted.begin(), ySorted.begin() + n/2);
        set<int> yRight(ySorted.begin() + n/2, ySorted.end());

        vector<int> A, B, C, D;

        for (int i = 0; i < n; ++i) {
            bool inXL = xLeft.count(i);
            bool inXR = xRight.count(i);
            bool inYL = yLeft.count(i);
            bool inYR = yRight.count(i);

            if (inXL && inYL) A.push_back(i);
            else if (inXR && inYR) B.push_back(i);
            else if (inXL && inYR) C.push_back(i);
            else if (inXR && inYL) D.push_back(i);
        }

        // Pair A with B
        for (int i = 0; i < A.size(); ++i) {
            cout << A[i] + 1 << " " << B[i] + 1 << '\n';
        }

        // Pair C with D
        for (int i = 0; i < C.size(); ++i) {
            cout << C[i] + 1 << " " << D[i] + 1 << '\n';
        }
    }

    return 0;
}