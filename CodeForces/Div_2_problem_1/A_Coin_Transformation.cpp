#include <bits/stdc++.h>
using namespace std;

long long n;

void input()
{
  cin >> n;
}

void solve()
{
  input();

  int ans = 1;
  while (n > 3)
  {
    n /= 4;
    ans *= 2;
  }
  cout << ans << endl;
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
