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
        vector<int> x;
        for (int i = k; i >= 1; i--)
        {
            x.push_back(i);
        }
        for (int i = k + 1; i <= n; i++) 
        {
            x.push_back(i);
        }

        bool good = true;
        for (int i = 0; i < n; i++)
        {
            if ((i + 1) % k == x[i] % k) 
            {
                cout << -1 << endl;
                good = false;
                break;
            }
        }

        if (good)
        {
            for (int i = 0; i < n; i++)
            {
                cout << x[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
