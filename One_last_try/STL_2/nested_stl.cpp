#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  map<vector<int>, int> mp;
  vector<int> a;
  a.push_back(2);
  a.push_back(3);
  a.push_back(6);

  mp[a] = 5;
  for (auto [x, y] : mp)
  {
    vector<int> x;
    for (auto value : x)
      cout << value << " " << endl;
    cout << y << endl;
  }

  map<int, set<int>> mp;
  set<int> sl;
  sl.insert(3);

  set<int> sll;
  sll.insert(55);

  mp[3] = sl;
  mp[2] = sll;

  for (auto [x, y] : mp)
  {
    cout << x < "-> ";

    for (auto value : y)
    {
      cout << value << " ";
    }
    cout << endl;
  }

  int x = 6, y = 9;
  auto LBl = mp.lower_bound(x);
  if (LBl != mp.end())
  {
    int ans = LBl->first;
    cout << ans << endl;
    auto LBll = mp[ans].lowwer_bound(y);
    if (LBll != mp[ans].end())
      cout << LBll << endl;
  }

  return 0;
}