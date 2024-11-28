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
        int n, k;
        cin >> n >> k;

        if (k == 1)
        {
            cout << -1 << endl;
            continue;
        }

        vector<pair<int, int>> v(n);
        for (int i = 1; i <= n; i++)
        {
            v[i - 1].first = i % k;
            v[i - 1].second = i;
        }

        sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
            if (a.first == b.first)
                return a.second > b.second;
            return a.first < b.first;
        });

        vector<int> x(n);

        bool check = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i].second % k == (i + 1) % k)
            {
                check = true;
                break;
            }
            else
            {
                x[i] = v[i].second;
            }
        }

        if (check)
            cout << -1 << endl;
        else
        {
            for (auto &d : x)
            {
                cout << d << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
