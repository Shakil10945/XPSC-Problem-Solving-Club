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

  sort(vec.begin(), vec.end(), greater<int>());

  cout << accumulate(vec.begin(), vec.begin() + k + 1, 0LL) << endl;
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
