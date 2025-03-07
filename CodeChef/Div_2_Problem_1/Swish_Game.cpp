#include <bits/stdc++.h>
using namespace std;

int n, x;
string str;

void input()
{
  cin >> n >> x;
  cin >> str;
}

void solve()
{
  input();

  if (count(str.begin(), str.end(), 'S') >= x)
  {
    cout << n << endl;
    return;
  }
  else
  {
    cout << n + (x - (count(str.begin(), str.end(), 'S'))-1) << endl;
    return;
  }
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
