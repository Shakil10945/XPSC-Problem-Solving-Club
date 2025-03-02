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
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < 3; i++)
    {
      if (i == 0)
        cout << b[i];
      else
        cout << a[i];
    }
    cout << " ";
    for (int i = 0; i < 3; i++)
    {
      if (i == 0)
        cout << a[i];
      else
        cout << b[i];
    }
    cout << endl;
  }

  return 0;
}