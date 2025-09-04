#include <bits/stdc++.h>

using namespace std;

const int MAX = 100'007;
const int MOD = 1'000'000'007;

vector<int> binary_decimals;

void make_binary()
{
    for (int i = 2; i < MAX; i++)
    {
        int curr = i;
        bool bad = false;
        while (curr)
        {
            if (curr % 10 > 1)
            {
                bad = true;
                break;
            }
            curr /= 10;
        }
        if (!bad)
            binary_decimals.push_back(i);
    }
}

bool ok(int n)
{
    if (n == 1)
        return true;

    bool ans = false;

    for (int i : binary_decimals)
    {
        if (n % i == 0)
            ans |= ok(n / i);
    }

    return ans;
}

void solve()
{
    int n;
    cin >> n;
    cout << (ok(n) ? "YES" : "NO") << endl;
}

int main()
{
    make_binary();

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve();

    return 0;
}
