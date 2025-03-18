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
    int n;
    cin >> n;

    int count = 1;
    int r = 1;
    while (true)
    {

      if (r >= n)
      {
        cout << count << endl;
        break;
      }
      count++;

      r = r * 2 + 2;
    }
  }

  return 0;
}