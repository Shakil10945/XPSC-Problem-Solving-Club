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
    int n, m;
    cin >> n >> m;
    string str;
    int x = 0;
    int c = 0;
    while (n--)
    {
      cin >> str;
      x += str.size();
      if (x <= m)
      {
        c++;
      }
      else
      {
        continue;
      }
    }
    cout << c << endl;
  }

  return 0;
}