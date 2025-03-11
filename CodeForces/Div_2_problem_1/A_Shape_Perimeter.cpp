#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a, b;

void input()
{
  cin >> n >> m;
  a.resize(n);
  b.resize(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i] >> b[i];
  }
}

void solve()
{
  input();

  cout << 2 * (accumulate(a.begin(), a.end(), 0) + m - a[0] + accumulate(b.begin(), b.end(), 0) + m - b[0]) << endl;
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
