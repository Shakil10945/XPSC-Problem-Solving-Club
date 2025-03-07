#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<long long int> vec;

void input()
{
  cin >> n >> x;
  vec.resize(n);

  for (int i = 0; i < n; i++)
    cin >> vec[i];
  for (int i = 0; i < n; i++)
  {
    int d;
    cin >> d;
    vec[i] = vec[i] * d;
  }
}

void solve()
{
  input();

  sort(vec.begin(), vec.end());
  long long sum = accumulate(vec.begin(), vec.end(), 0LL);
  if (sum < x)
  {
    cout << -1 << endl;
    return;
  }

  for (int i = n - 1; i >= 0; i--)
  {
    x -= vec[i];
    if (x <= 0)
    {
      cout << n - i << endl;
      return;
    }
  }
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
