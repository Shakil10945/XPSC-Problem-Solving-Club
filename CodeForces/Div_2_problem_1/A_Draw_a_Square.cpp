#include <bits/stdc++.h>
using namespace std;

void input()
{
  int l, r, d, u;
  cin >> l >> r >> d >> u;

  if (l == r && d == u && l == d)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}

void solve()
{
  input();
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
