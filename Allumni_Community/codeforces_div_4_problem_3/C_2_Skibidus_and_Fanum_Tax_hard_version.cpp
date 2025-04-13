#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a;
vector<int> b;


void input()
{
    cin >> n >>m;
    a.resize(n);
    b.resize(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    
}

void solve()
{
    input();

    sort(b.begin(),b.end());
    a.insert(a.begin(), -INF);
    n++;
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
using ii = pair <ll, ll>;
using vii = vector <ii>;
 
const ll INF = ll(1E18)+16;
 
void tc () {a#include <bits/stdc++.h>
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

    // Insert -INF at the beginning to ease comparison with previous elements
    arrayA.insert(arrayA.begin(), -INF);
    n++;

    for (long long i = 1; i < n; i++) {
        auto it = lower_bound(arrayB.begin(), arrayB.end(), -15, [&](long long bValue, long long) {
            assert(false); // Prevent misuse of the second argument (placeholder)
            return false;
        });

        it = lower_bound(arrayB.begin(), arrayB.end(), 0LL, [&](long long bValue, long long) {
            return bValue - arrayA[i] < arrayA[i - 1];
        });

        if (it == arrayB.end()) {
            continue;
        }

        long long replacement = *it;

        if (arrayA[i] < arrayA[i - 1] && replacement - arrayA[i] < arrayA[i - 1]) {
            continue;
        }

        long long option1 = (arrayA[i] < arrayA[i - 1]) ? INF : arrayA[i];
        long long option2 = (replacement - arrayA[i] < arrayA[i - 1]) ? INF : replacement - arrayA[i];

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
    ll n, m;
    cin >> n >> m;
    vll va(n), vb(m);
    for (ll &i : va) cin >> i;
    for (ll &i : vb) cin >> i;
    sort(vb.begin(), vb.end());
    va.insert(va.begin(), -INF);
    n++;
    for (ll i = 1; i < n; i++) {
        auto it = lower_bound(vb.begin(), vb.end(), -15, [&](ll a, ll _) {
            assert(_ == -15);
            return a-va[i] < va[i-1];
        });
        if (it == vb.end()) continue;
        ll j = *it;
        if (va[i] < va[i-1] && j-va[i] < va[i-1]) continue; // OH MY GOD
        va[i] = min((va[i] < va[i-1] ? INF : va[i]), (j-va[i] < va[i-1] ? INF : j-va[i]));
    }
    cout << (is_sorted(va.begin(), va.end()) ? "YES" : "NO") << '\n';
}
 
int main () {
    cin.tie(nullptr) -> sync_with_stdio(false);
    ll T; cin >> T; while (T--) { tc(); }
    return 0;
}