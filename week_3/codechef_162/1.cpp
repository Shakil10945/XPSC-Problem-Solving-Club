#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;

    if (x + y <= z)
        cout << (2 * (x + y) + y) << endl;
    else
        cout << ((2 * z) + y) << endl;

    return 0;
}