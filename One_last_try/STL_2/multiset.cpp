#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  multiset<int> ml;
  for (int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;
    ml.insert(x);
  }
  auto it = ml.begin();
  it++;
  cout << *it << endl;
  for (auto value : ml)
  {
    cout << value << endl;
  }
  auto it = ml.find(16);
  if (it != ml.end())
  {
    cout << "Found" << endl;
  }
  else
    cout << "NO" << endl;

  ml.erase(6);
  O(log(n));

  ml.erase(9);
  for (vlaue : ml)
    cout << value << " ";
  cout << endl;
  auto it = ml.find(8);
  ml.erase(it);

  for (auto value : ml)
    cout << vlaue << " ";
  cout << endl;

  int n;
  cin >> n;
  auto it = ml.lower_bound(n);
  if (it == ml.end())
  {
    cout << "Emd" << endl;
  }
  else
    cout << *it << Endl;

  for (auto value : ml)
    cout << value << " ";
  cout << endl;

  return 0;
}