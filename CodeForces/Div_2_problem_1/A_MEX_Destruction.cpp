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

  while (!vec.empty() && vec.back() == 0)
    vec.pop_back();
  reverse(vec.begin(), vec.end());
  while (!vec.empty() && vec.back() == 0)
    vec.pop_back();

  if (vec.empty())
  {
    cout << 0 << endl;
    return;
  }

  cout << (count(vec.begin(), vec.end(), 0) ? 2 : 1) << endl;
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
