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
    int n;
    cin >> n;
    cout << (n / 4) + (n % 4) / 2 << endl;
  }

  return 0;
}