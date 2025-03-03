#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
  cin >> n;
  vec.resize(n);

  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 1)
    {
      int x;
      cin >> x;
      vec[i] = -x;
    }
    else
    {
      cin >> vec[i];
    }
  }
}

void solve()
{
  input();

  int sum = accumulate(vec.begin(), vec.end(), 0);
  cout << sum << endl;
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
