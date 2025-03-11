#include <bits/stdc++.h>
using namespace std;

int n;

void input()
{
  // cin >> n;
  int a, b;
  cin >> a >> b;

  if (a == 1 && b == 1)
    cout << 1 << endl;
  else
    cout << b - a << endl;
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
