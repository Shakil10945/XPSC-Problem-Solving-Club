#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    v.push_back(x);
  }
  cout << v.size() << endl;
  v.pop_back();
  cout << v.size() << endl;
  v.pop_back() << endl;

  for (int i = 0; i < n; i++)
    cout << v[i] << endl;
  cout << endl;
  cout << v.front() << endl;
  cout << v.back() << endl;

  v.clear();
  cout << v.size() << endl;

  cout << v.empty() << endl;

  int n;
  cin >> n;
  vector<int> v(n, 5);
  for (int i = 0; i < n; i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
  int n;
  cin >> n;
  vector<int> v;
  v.assign(n, -1);
  for (int i = 0; i < n; i++)
  {
    cout << v[i] << endl;
  }
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  cout << endl;
  int n;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    v.push_back(x);
  }
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
  auto it = v.begin() + 2;
  cout << *it << endl;
  for (auto it = v.begin(); it != v.end(); it++)
    cout << *it << endl;

  auto last = --v.end();
  cout << *last << " " << endl;
  reverse(v.begin(), v.end());

  sort(v.begin(), v.end());

  for (auto value : v)
    cout << value << "" << endl;
  auto mn = min_element(v.begin(), v.end());
  cout << *mn << endl;
  auto mx = max_element(v.begin(), v.end());
  int max_position = mx - v.begin();
  cout << max_position << endl;
  return 0;
}