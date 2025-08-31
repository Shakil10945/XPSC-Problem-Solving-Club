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
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (b < a)
            swap(a, b);

        if (c >= a && c <= b)
            cout << (d >= a && d <= b ? "NO" : "YES") << endl;
        else
            cout << (d >= a && d <= b ? "YES" : "NO") << endl;
    }

    return 0;
}