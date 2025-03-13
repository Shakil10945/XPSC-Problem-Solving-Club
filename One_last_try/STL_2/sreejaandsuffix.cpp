#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  set<int> s;
  for (int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;
    s.insert(x);
  }
  auto it = s.begin();
  it++;
  it++;
  cout << *it << endl;

  for (auto value : s)
    cout << value << endl;
  cout << endl;
  auto it = s.find(55);
  if (it != s.end())
  {
    cout << "FoUnd" << endl;
  }
  else
    cout << "NOt Found" << endl;
  s.erase(6);

  for (auto value : s)
    cout << value << "";
  cout << endl;

  scout << s.count(4) << endl;
  int n;
  cin >> n;
  auto it = s.lower_bound(n);
  if (it == s.end())
  {
    cout << "End" << endl;
  }
  else
    cout << *it << endl;

  return 0;
}