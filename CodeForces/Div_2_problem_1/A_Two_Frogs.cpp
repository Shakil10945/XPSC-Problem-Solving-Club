#include <bits/stdc++.h>
using namespace std;

int n, a, b;

void input()
{
  cin >> n >> a >> b;
}

void solve()
{
  input();

  cout << ((abs(a - b) % 2 == 0) ? "YES" : "NO") << endl;
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
