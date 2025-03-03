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

  int has = 0;
  int nd = 0;
  for (int i = 0; i < n; i++)
  {
    if (vec[i] >= k)
    {
      has += vec[i];
    }
    else if (vec[i] == 0 && has)
    {
      has--;
      nd++;
    }
  }
  cout << nd << endl;
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
