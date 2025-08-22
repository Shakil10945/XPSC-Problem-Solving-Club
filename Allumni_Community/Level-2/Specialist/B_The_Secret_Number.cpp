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
        long long n;
        cin >> n;
        vector<long long> ans;

        __int128 pW = 10;

        for (int k = 1; k <= 18; ++k)
        {
            __int128 dnm = pW + 1;
            if (dnm > (__int128)n)
                break;

            if ((__int128)n % dnm == 0)
            {
                long long x = (long long)((__int128)n / dnm);
                ans.push_back(x);
            }

            pW *= 10;
        }

        if (ans.empty())
            cout << 0 << endl;
        else
        {
            sort(ans.begin(), ans.end());
            cout << ans.size() << endl;

            for (size_t i = 0; i < ans.size(); i++)
                cout << ans[i] << " ";
            cout << endl;
        }
    }

    return 0;
}
