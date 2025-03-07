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

  set<int> my_set;
  for (auto x : vec)
  {
    if (my_set.count(x))
    {
      my_set.erase(x);
      my_set.insert(0);
    }
    else
    {
      my_set.insert(x);
    }
  }
  cout << my_set.size() << endl;
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
