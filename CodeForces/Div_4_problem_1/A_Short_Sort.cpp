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
    string st;

    int x = 0;
    cin >> st;

    if (st[0] == 'a')
      x++;
    else if (st[1] == 'b')
      x++;
    else if (st[2] == 'c')
      x++;

    if (x)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}