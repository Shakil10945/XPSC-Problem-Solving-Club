#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  map<pair<string, string>, bool> mp;
  for (int i = 0; i < n; i++)
  {
    string a, b;
    cin >> a >> b;
    mp[{a, b}] = true;
  }
  for (auto value : mp)
  {
    pair<string, string> p = value.first;
    bool ok = value.second;
    cout << p.first << " " << p.second << " " << endl;
  }
  cout << mp.size() << endl;
  return 0;
}