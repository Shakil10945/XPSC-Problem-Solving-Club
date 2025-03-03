#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTen(int n)
{
  while (n > 1 && n % 10 == 0)
  {
    n /= 10;
  }
  return n == 1;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, a;
  cin >> t;
  while (t--)
  {
    cin >> a;
    cout << ((a >= 102 && a <= 109) || (a >= 1010 && a <= 1099) ? "YES" : "NO") << '\n';
  }

  return 0;
}
