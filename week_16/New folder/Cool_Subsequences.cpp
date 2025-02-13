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

  map<int, int> my_map;

  for (int i = 0; i < n; i++)
  {
    my_map[vec[i]]++;

    if (my_map[vec[i]] > 1)
    {
      cout << 1 << endl;
      cout << vec[i] << endl;
      return;
    }
  }
  cout << -1 << endl;
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
