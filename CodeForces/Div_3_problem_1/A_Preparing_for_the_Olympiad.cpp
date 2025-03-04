#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;
vector<int> vecb;

void input()
{
  cin >> n;
  vec.resize(n);
  vecb.resize(n);

  for (int i = 0; i < n; i++)
    cin >> vec[i];
  for (int i = 0; i < n; i++)
    cin >> vecb[i];
}

void solve()
{
  input();
  if (n == 1)
  {
    cout << vec[0] << endl;
    return;
  }

  vector<int> x;
  for (int i = 0; i < n - 1; i++)
  {
    if (vec[i] - vecb[i + 1] > 0)
      x.push_back(vec[i] - vecb[i + 1]);
  }
  // cout << "HI" << endl;
  cout << (accumulate(x.begin(), x.end(), vec[n - 1])) << endl;
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
