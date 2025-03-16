#include <bits/stdc++.h>
using namespace std;

int x, y;

void input()
{
  cin >> x >> y;
}

void solve()
{
  input();

  cout << ((x + 1 >= y && (x + 1 - y) % 9 == 0) ? "YES" : "NO") << endl;
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
