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
        int l1, b1, l2, b2, l3, b3; cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
        int side = max({l1, l2, l3, b1, b2, b3});
        if (l1 * b1 + l2 * b2 + l3 * b3 != side * side)
        {
            cout << "NO" << endl;
            continue;
        }
        if (b1 == b2 && b2 == b3 && b1 == side && (l1 + l2 + l3 == side))
        {
            cout << "YES" << endl;
            continue;
        }
        if (l1 == l2 && l2 == l3 && (l1 == side) && b1 + b2 + b3 == side)
        {
            cout << "YES" << endl;
            continue;
        }
        if (l1 == side && b2 == b3 && (l2 + l3 ==side) && b1 + b2 == side)
        {
            cout << "YES" << endl;
            continue;
        }
        if (b1 == side && l2 == l3 && (b2 + b3 ==side) && l1 + l2 == side)
        {
            cout << "YES" << endl;
            continue;
        }
        if (l2 == side && b1 == b3 && l1 + l3 ==side && b2 + b1== side)
        {
            cout << "YES" << endl;
            continue;
        }
        if (b2 == side && l1 == l3 && b1 + b3== side && l2 + l1 == side)
        {
            cout << "YES" << endl;
            continue;
        }
        if (l3 == side && b1 == b2 && l1 + l2== side && b3 + b1 == side)
        {
            cout << "YES" << endl;
            continue;
        }
        if (b3 == side && l1 == l2 && b1 + b2== side && l3 + l1 == side)
        {
            cout << "YES"<< endl;
            continue;
        }
        cout << "NO"<< endl;
    }

    return 0;
}