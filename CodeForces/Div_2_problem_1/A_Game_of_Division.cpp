#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> vec;

void input()
{
  cin >> n >> k;
  vec.resize(n);

  for (int i = 0; i < n; i++)
    cin >> vec[i];
}

void solve()
{
  input();

  for (int i = 0; i < n; i++)
  {
    bool check = true;
    for (int j = 0; j < n; j++)
    {
      if (i == j)
        continue;
      // cout << j << " ";
      if (abs(vec[i] - vec[j]) % k == 0)
      {
        // cout << 'Y' << endl;
        check = false;
        break;
      }
    }
    if (check)
    {
      cout << "YES" << endl;
      cout << i + 1 << endl;
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
