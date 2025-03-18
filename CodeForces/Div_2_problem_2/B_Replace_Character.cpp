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

  map<char, int> mp;
  for (auto v : str)
    mp[v]++;
  char ln = mp.begin()->first;
  int lnt = mp.begin()->second;
  char low = mp.rbegin()->first;
  int lowt = mp.rbegin()->second;
  for (auto i : mp)
  {
    if (lnt < i.second)
    {
      ln = i.first;
      lnt = i.second;
    }
    if (lowt > i.second)
    {
      low = i.first;
      lowt = i.second;
    }
  }
  bool ch = false;
  for (int i = 0; i < n; i++)
  {
    if (!ch && low == str[i])
    {
      cout << ln;
      ch = true;
      continue;
    }
    cout << str[i];
  }
  cout << endl;
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
