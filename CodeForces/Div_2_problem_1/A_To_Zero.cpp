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
    if (a % 2 == 0)
      cout << a / (b - 1) + ((a % (b - 1) == 0) ? 0 : 1) << endl;

    else
      cout << 1 + (a - b) / (b - 1) + (((a - b) % (b - 1) == 0) ? 0 : 1) << endl;

    // if (a % 2 == 0)
    // {
    //   cout << a / (b - 1) + (a % (b - 1)) << endl;
    // }
    // else
    // {
    //   cout << a / (b - 1) + ((a % (b - 1) == 0) ? 0 : 1) << endl;
    // }
  }

  return 0;
}