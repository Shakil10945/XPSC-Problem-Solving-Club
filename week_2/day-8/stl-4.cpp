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
        cin.ignore();
        int n, k;
        cin >> n >> k;

        vector<int> v;
        while (n--)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        while (k--)
        {
            int l, r;
            cin >> l >> r;
            auto it = find(v.begin(), v.end(), l);
            auto itt = find(it, v.end(), r);
            if (itt != v.end())
            {
                cout << "YES" << endl;
                continue;
            }
            cout << "NO" << endl;
        }
    }
    return 0;
}