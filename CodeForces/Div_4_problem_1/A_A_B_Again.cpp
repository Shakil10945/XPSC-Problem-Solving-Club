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

    string st = to_string(n);
    int x = (int)(st[0] - '0') + (int)(st[1] - '0');
    cout << x << endl;
  }
  return 0;
}