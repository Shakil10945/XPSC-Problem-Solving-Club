#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a, b;

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

  // Find the minimum element in `b`
  int d = *min_element(b.begin(), b.end());

  // Rotate `b` so that `d` is at the beginning
  int x = find(b.begin(), b.end(), d) - b.begin();
  rotate(b.begin(), b.begin() + x, b.end());

  // Process `a`
  for (int i = 0; i <= n - m; i++)
  { // Fixed loop condition
    if (a[i] >= b[0])
    { // Check if the segment should be replaced
      int minInSegment = *min_element(a.begin() + i, a.begin() + i + m);
      if (minInSegment < b[0])
      {
        copy(b.begin(), b.end(), a.begin() + i);
        i += m - 1; // Skip the replaced section
      }
    }
  }

  // Output result
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
