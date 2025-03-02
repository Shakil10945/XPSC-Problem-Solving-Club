#include <bits/stdc++.h>
using namespace std;

int n;
deque<int> vec;

void input()
{
  cin >> n;
  // vec.resize(n);

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    vec.push_back(x);
  }
}

void solve()
{
  input();
  sort(vec.begin(), vec.end());
  int ans = min({vec[n - 1] - vec[2], vec[n - 2] - vec[1], vec[n - 3] - vec[0]});
  cout << ans << endl;
  vec.clear();
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
