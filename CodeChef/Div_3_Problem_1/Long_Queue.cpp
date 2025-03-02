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

  for (int i = n - 1 - 1; i >= 0; i--)
  {
    if (!(vec[i] <= vec[n - 1] / 2))
    {
      cout << i + 2 << endl;
      return;
    }
  }
  cout << 1 << endl;
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
