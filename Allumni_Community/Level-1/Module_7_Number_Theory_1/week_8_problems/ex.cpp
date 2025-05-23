#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        for (int &x : a) cin >> x;

        vector<int> queries;
        queries.push_back(31); // dummy to handle initial comparison

        while (q--) {
            int x;
            cin >> x;
            if (x < queries.back()) {
                queries.push_back(x);
            }
        }

        for (int &x : a) {
            for (int y : queries) {
                if (x % (1 << y) == 0) {
                    x |= (1 << (y - 1));
                }
            }
            cout << x << ' ';
        }
        cout << '\n';
    }

    return 0;
}