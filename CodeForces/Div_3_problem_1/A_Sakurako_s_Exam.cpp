#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    if ((a % 2 != 0) || (a == 0 && b % 2 != 0))
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }

  return 0;
}