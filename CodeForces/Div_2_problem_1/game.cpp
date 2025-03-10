#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tt;
  cin >> tt;
  while (tt--)
  {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> b(k);
    for (int i = 1; i <= n; i++)
    {
      int x;
      cin >> x;
      b[x % k].push_back(i);
    }
    int res = -1;
    for (int i = 0; i < k; i++)
    {
      if ((int)b[i].size() == 1)
      {
        res = b[i][0];
        break;
      }
    }
    if (res == -1)
    {
      cout << "NO" << endl;
    }
    else
    {
      cout << "YES" << endl
           << res << endl;
    }
  }

  return 0;
}