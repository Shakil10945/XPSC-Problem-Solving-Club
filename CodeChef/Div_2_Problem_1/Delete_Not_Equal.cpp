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

  int zero = count(str.begin(), str.end(), '0');
  int one = count(str.begin(), str.end(), '1');

  cout << (zero && one ? 1 : str.size()) << endl;
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
