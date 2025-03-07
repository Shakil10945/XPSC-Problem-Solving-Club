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
  cout << "HI" << endl;
  int l = 1, r = 2;
  while (l <= r)
  {
    if (l == 30)
      break;
    if (l % 3 == 0)
    {
      l = r;
      continue;
    }
    cout << l << " " << r << endl;
    l++;
    r++;
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
