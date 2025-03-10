#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<vector<int>> vec;

void input()
{
  cin >> n >> k;
  // vec.resize(k);

  vec.assign(k, vector<int>());

  for (int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;
    vec[x % k].push_back(i);
  }
}

void solve()
{
  input();

  for (int i = 0; i < k; i++)
  {
    if (vec[i].size() == 1)
    {
      cout << "YES" << endl;
      cout << vec[i][0] << endl;
      return;
    }
  }
  cout << "NO" << endl;
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
