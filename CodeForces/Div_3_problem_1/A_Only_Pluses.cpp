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
    vector<int> vec;
    int x, y, z;
    cin >> x >> y >> z;
    vec.push_back(x);
    vec.push_back(y);
    vec.push_back(z);
    sort(vec.begin(), vec.end());

    for (int i = 1; i <= 5; i++)
    {
      vec[0] = vec[0] + 1;
      sort(vec.begin(), vec.end());
    }
    cout << vec[0] * vec[1] * vec[2] << endl;
  }

  return 0;
}