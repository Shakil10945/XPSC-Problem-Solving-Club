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

  if (k == 1)
  {
    cout << max(vec[0] + *max_element(vec.begin() + 1, vec.begin() + n), vec[n - 1] + *max_element(vec.begin(), vec.begin() + n - 1)) << endl;
    //  vec[0] + vec[n - 1] + *max_element(vec.begin() + 1, vec.begin() + n - 1) - min({vec[0], vec[n - 1], *max_element(vec.begin() + 1, vec.begin() + n - 1)}) << endl;
    return;
  }
  sort(vec.rbegin(), vec.rend());

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