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
    cout << (n % 2 == 0 ? "Sakurako" : "Kosuke") << endl;
  }

  return 0;
}