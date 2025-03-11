#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
  cin >> n;
  vec.resize(n);

  for (int i = 0; i < n; i++)
    cin >> vec[i];
}

void solve()
{
  input();

  int even = 0, odd = 0;

  for (int i = 0; i < n; i++)
  {
    if (vec[i] % 2 == 0)
      even++;
    else
      odd++;
  }
  cout << ((!even && odd) ? odd - 1 : odd + 1) << endl;
  // if (n == 1 && (vec[0] % 2 != 0))
  // {
  //   cout << 0 << endl;
  //   return;
  // }
  // if (even && odd)
  //   cout << 1 + odd << endl;
  // if (odd && !even)
  //   cout << odd - 1 << endl;
  // else
  //   cout << 1 + odd << endl;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
    solve();

  return 0;
}
