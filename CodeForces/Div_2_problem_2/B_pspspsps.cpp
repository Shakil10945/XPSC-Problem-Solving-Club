#include <bits/stdc++.h>
using namespace std;

int n;
string str;

void input()
{
  cin >> n;
  cin >> str;
}

void solve()
{
  input();

  set<int> s;

  for (int i = 0; i < n; i++)
  {
    if (str[i] == '.')
      continue;
    int cnt = 0;
    if (str[i] == 'p')
    {
      cnt = i + 1;
    }
    else if (str[i] == 's')
      cnt = n - (i + 1) + 1;

    if (s.count(cnt))
    {
      cout << "NO" << endl;
      return;
    }
    s.insert(cnt);
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
