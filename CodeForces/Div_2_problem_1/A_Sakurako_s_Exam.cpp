#include <bits/stdc++.h>
using namespace std;

int a, b;

void input()
{
  cin >> a >> b;
}

void solve()
{
  input();

  cout << (a % 2 == 1 || (!a && b % 2 == 1) ? "NO" : "YES") << endl;
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
