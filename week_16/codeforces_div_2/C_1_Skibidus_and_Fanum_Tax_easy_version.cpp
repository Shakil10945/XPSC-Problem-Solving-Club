#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a;
vector<int> b;
void input()
{
    cin >> n >> m;
    a.resize(n);
    b.resize(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    //cout<<"HI"<<endl;
}

void solve()
{
    input();
    //cout<<"HI"<<endl;
    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }

    a[0] = min(a[0], b[0] - a[0]);
    for (int i = 1; i < n; i++)
    {
        if ((a[i - 1] <= min(a[i], b[0] - a[i])))
        {
            a[i] = min(b[0]-a[i], a[i]);
        }
        else if((a[i - 1] <= max(a[i], b[0] - a[i])))
        {
            a[i] = max(b[0] - a[i] , a[i]);
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout << "YES" << endl;
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