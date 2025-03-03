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
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a == b && b == c ? 0 : max({a, b, c}) - min({a, b, c})) << endl;
  }

  return 0;
}