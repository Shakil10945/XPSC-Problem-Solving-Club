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
        int n;
        cin >> n;

        if (n % 3 == 0)
            cout << n / 3 * 5 << endl;

        else if (n % 3 == 2)
            cout << n / 3 * 5 + 4 << endl;
        else
            cout << (n - 2) / 3 * 5 + 8 << endl;
    }

    return 0;
}
