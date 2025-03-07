#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
  cin >> n;
  vec.resize(n - 1);

  for (int i = 0; i < n - 1; i++)
    cin >> vec[i];
}

void solve()
{
  input();

  sort(vec.begin(), vec.end());

  // for (auto d : vec)
  //   cout << 1 << " ";

  cout << 1 << " ";
  int x = 1;
  for (int i = 0; i < n - 1; i++)
  {
    x = vec[i] - x;
    cout << x << " ";
  }
  cout << endl;
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
