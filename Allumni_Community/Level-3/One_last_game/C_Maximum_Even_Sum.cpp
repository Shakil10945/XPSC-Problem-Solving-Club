#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long x = 0;
        if (b % 2LL)
            x = a * b + 1;
        else
            x = a * (b / 2) + 2;
        cout << (x % 2 ? -1 : x) << endl;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        unsigned long long a, b;
        cin >> a >> b;

        unsigned long long x = 0;

        if (b & 1ULL)
            x = a * b + 1ULL;
        else
            x = a * (b / 2ULL) + 2ULL;

        if (x & 1ULL)
            cout << -1 << "\n";
        else
            cout << x << "\n";
    }
    return 0;
}