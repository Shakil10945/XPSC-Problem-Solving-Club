#include <bits/stdc++.h>
using namespace std;

void input()
{
  int x;
  cin >> x;
  bool check = false;
  int y = 0;
  vector<int> store;
  if (x == 1 || x == 2 || x == 3 || x == 4)
  {
    cout << -1 << endl;
    return;
  }
  for (int i = __lg(x); i >= 0; i--)
  {
    int x_or = x ^ (1 << i);
    if (x_or < (x + (1 << i)) && (x_or))
    {
      cout << (1 << i) << endl;
      return;
    }
  }
  cout << -1 << endl;
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
