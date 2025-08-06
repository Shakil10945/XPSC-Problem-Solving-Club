#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> vec;
vector<int> vecx;

void input()
{
    cin >> n >> m;
    vec.resize(n);
    vecx.resize(m);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    for (int i = 0; i < m; i++)
        cin >> vecx[i];
}

void solve()
{
    input();

    int last = -1; 
    int p_scan = 0;
    int j = 0;

    while (true)
    {
        int r = min(n, m + j);
        int found = -1;

        for (int p = p_scan; p < r; ++p)
        {
            if (vec[p] == vecx[p - j])
            {
                found = p;
                break;
            }
        }

        if (found == -1)
            break;

        j++;

        
        p_scan = found + 1; 
    }

    cout << (n - j) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
