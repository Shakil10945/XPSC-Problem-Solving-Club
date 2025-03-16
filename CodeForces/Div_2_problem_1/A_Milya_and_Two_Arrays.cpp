#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;
vector<int> vec2;

void input()
{
  cin >> n;
  vec.resize(n);
  vec2.resize(n);

  for (int i = 0; i < n; i++)
    cin >> vec[i];
  for (int i = 0; i < n; i++)
    cin >> vec2[i];
}

void solve()
{
  input();

  set<int> my_set;
  for (auto value : vec)
    my_set.insert(value);
  set<int> my_set2;
  for (auto value : vec2)
    my_set2.insert(value);

  cout << (my_set2.size() + my_set.size() < 4 ? "NO" : "YES") << endl;
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
