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

  sort(vec.begin(), vec.end());
  long long sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += max(vec[i] - i, 0);
  }
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
