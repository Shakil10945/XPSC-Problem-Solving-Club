#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<pair<int, int>> vec;

void input()
{
    cin >> n >> m;
    vec.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i].first;
        cin >> vec[i].second;
    }
}

void solve()
{
    input();

    long long sum = 4 * m;
    int prev_x = vec[0].first + m;
    int prev_y = vec[0].second + m;

    for (int i = 1; i < n; i++)
    {
        int x = vec[i - 1].first + vec[i].first;
        int y = vec[i - 1].second + vec[i].second;
        vec[i].first = x;
        vec[i].second = y;

        sum += 4 * m;

        if (x < prev_x && y < prev_y)
        {
            sum -= ((2 * (prev_x - x)) + (2 * (prev_y - y)));
            // cout<<((2 * (prev_x - x)) + (2 * (prev_y - y)));
            // cout<<"Prevx "<<prev_x << " x "<<x << " py"<<prev_y<<" y "<<y<<endl;
        }
        prev_x = x+m;
        prev_y = y+m;
    }

    cout << sum << endl;
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
