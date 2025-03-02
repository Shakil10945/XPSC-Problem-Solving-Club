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
    int d, x, y;
    cin >> d >> x >> y;

    if (y >= x)
    {
      cout << 0 << endl;
      continue;
    }
    int day = 1;
    while (day++)
    {
      y--;
      int discount = day * (x * d) / 100;
      if (y <= 0)
      {
        cout << -1 << endl;
        break;
      }
      else if ((x - discount) <= y)
      {
        cout << day << endl;
        break;
      }
    }
  }

  return 0;
}