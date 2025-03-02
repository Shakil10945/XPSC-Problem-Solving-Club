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
    int n, k;
    cin >> n >> k;

    cout << ((k < (n * 10) || k > (n * 12)) ? "NO" : "YES") << endl;
  }

  return 0;
}