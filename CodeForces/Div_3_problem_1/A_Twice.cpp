#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
      cin >> vec[i];
    }

    int count = 0;
    sort(vec.begin(), vec.end());
    map<int, int> my_map;
    for (auto x : vec)
      my_map[x]++;

    for (auto x : my_map)
    {
      count += x.second / 2;
    }
    cout << count << endl;
  }

  return 0;
}