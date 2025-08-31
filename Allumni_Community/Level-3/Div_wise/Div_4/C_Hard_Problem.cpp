#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int m, a, b, c; cin >> m >> a >> b >> c;
        int x = min(m, a), y = min(m, b);
        int z = min(m-x, c);
        c-=z;
        z+= min(m-y, c);
        cout << x + y + z << '\n';
    }
}