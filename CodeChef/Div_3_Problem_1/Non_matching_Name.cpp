#include <bits/stdc++.h>
using namespace std;

int n, m;
string st;
string str;

void input()
{
  cin >> n >> m;
  cin >> st >> str;
}

void solve()
{
  input();

  set<char> my_set;

  // cout << st << " " << str << endl;

  for (int i = 0; i < n; i++)
  {
    my_set.insert(st[i]);
  }

  for (int i = 0; i < m; i++)
  {
    my_set.insert(str[i]);
  }

  for (char i = 'a'; i <= 'z'; i++)
  {
    if (my_set.count(i) == 0)
    {
      cout << "YES" << endl;
      return;
    }
  }
  cout << "NO" << endl;
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
