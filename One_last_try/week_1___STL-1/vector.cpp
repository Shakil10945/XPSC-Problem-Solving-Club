#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  vector<vector<int>> v;
  for (int i = 0; i < n; i++)
  {
    vector<int> a;
    for (int j = 0; j < m; j++)
    {
      int x;
      cin >> x;
      a.push_back(x);
    }
    v.push_back(a);
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}