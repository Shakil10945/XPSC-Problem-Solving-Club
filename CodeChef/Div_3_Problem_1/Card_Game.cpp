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
    /* code */

    int n, d;
    cin >> n >> d;
    // if (d % 2 != 0)
    // {
    //   if (n % 2 != 0)
    //   {
    //     cout << (n / 2) << endl;
    //   }
    //   else
    //   {
    //     cout << (n / 2) - 1 << endl;
    //   }
    // }
    // else
    // {
    //   cout << (n / 2) - 1 << endl;
    // }

    cout << (n / 2) - (n % 2 == 0 || d % 2 == 0) << endl;
  }

  return 0;
}