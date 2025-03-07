#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<int> vec;

void input()
{
  cin >> n >> x;
  vec.resize(n);

  for (int i = 0; i < n; i++)
    cin >> vec[i];
}

void solve()
{
  input();
  sort(vec.begin(), vec.end(), greater<int>());
  long long ans = vec[0];
  for (int i = 1; i < n; i++)
  {
    ans = max(ans, (long long)vec[i] + (long long)x * i);
  }
  cout << ans << endl;
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
