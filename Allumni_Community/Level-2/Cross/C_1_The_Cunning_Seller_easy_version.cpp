#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int MAXP = 40;
    vector<long long> p3(MAXP);

    p3[0] = 1;
    for (int i = 1; i < MAXP; ++i)
        p3[i] = p3[i - 1] * 3LL;

    int t;
    cin >> t;
    while (t--)
    {

        long long n;
        cin >> n;

        long long cost = 0;
        int i = 0;
        while (n > 0)
        {
            int d = n % 3;

            if (d)
            {
                if (i == 0)
                    cost += (long long)d * p3[1];

                else
                    cost += (long long)d * (p3[i + 1] + (long long)i * p3[i - 1]);
            }

            n /= 3;
            i++;
        }

        cout << cost << endl;
    }

    return 0;
}
