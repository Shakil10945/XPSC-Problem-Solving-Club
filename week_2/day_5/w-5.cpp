#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &x : v)
            cin >> x;

        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            while (m--)
            {
                char c;
                cin >> c;
                if (c == 'D')
                {
                    if (v[i] == 9)
                        v[i] = 0;
                    else
                        v[i]++;
                }
                if (c == 'U')
                {
                    if (v[i] == 0)
                        v[i] = 9;
                    else
                        v[i]--;
                }
            }
        }
        for (auto &x : v)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}