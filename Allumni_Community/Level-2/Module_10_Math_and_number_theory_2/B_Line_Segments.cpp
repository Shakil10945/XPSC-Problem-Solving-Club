#include <bits/stdc++.h>
using namespace std;

int n;
int px, py, qx, qy;
vector<int> vec;

void input() {
    cin >> n;
    cin >> px >> py >> qx >> qy;
    vec.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
}

void solve() {
    input();

    long long dx = qx - px;
    long long dy = qy - py;
    long double distance = sqrtl((long double)dx * dx + (long double)dy * dy);

    long long total = accumulate(vec.begin(), vec.end(), 0LL);

    if (distance > total + 1e-8L) {
        cout << "No\n";
        return;
    }

    long long d_round = (long long)roundl(distance);
    if (((d_round % 2) + 2) % 2 != ((total % 2) + 2) % 2) {
        cout << "No";
        return;
    }

    cout << "Yes\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
