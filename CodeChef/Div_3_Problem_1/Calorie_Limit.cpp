#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> vec;

void input()
{
  cin >> n >> m;
  vec.resize(n);

  for (int i = 0; i < n; i++)
    cin >> vec[i];
}

void solve()
{
  input();
  int x = 0;
  for (int i = 0; i < n; i++)
  {
    x += vec[i];
    if (x > m)
    {
      cout << i << endl;
      return;
    }
  }
  cout << n << endl;
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
