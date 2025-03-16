#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
  cin >> n;

  string st;
  cin >> st;
  int ans = 0;
  for (int i = 0; i < n - 1; i++)
  {
    if (st[i] != st[i + 1])
      ans++;
  }
  cout << ((st[0] == '1') ? ++ans : ans) << endl;
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
