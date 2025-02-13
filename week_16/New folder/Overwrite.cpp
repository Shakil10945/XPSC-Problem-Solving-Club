#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a;
vector<int> b;

void input()
{
  cin >> n >> m;
  a.resize(n);
  b.resize(m);

  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < m; i++)
    cin >> b[i];
}

void solve()
{
  input();

  auto d = *min_element(b.begin(), b.end());
  int x = find(b.begin(), b.end(), d) - b.begin();
  rotate(b.begin(), b.begin() + x, b.end());

  for (int i = 0; i < n - m; i++)
  {
    if (a[i] >= b[0])
    {
      auto dd = *min_element(a.begin() + i, a.begin() + i + m);
      if (dd < b[0])
      {
        for (int j = 0; j < m; j++)
        {
          a[i + j] = b[j];
        }
        i += m - 1;
      }
    }
  }

  for (auto x : a)
    cout << x << " ";
  cout << endl;
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
