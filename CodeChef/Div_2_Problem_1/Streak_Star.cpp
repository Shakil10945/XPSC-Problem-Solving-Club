#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<int> vec;

void input()
{
  cin >> n >> x;
  vec.resize(n);

  for (int i = 0; i < n; i++)
    cin >> vec[i];
}

void solve()
{
  input();

  int l = 0, r = l + 1;

  int s = 0, final = 0;
  bool flag = false;
  while (r < n)
  {
    if (vec[l] <= vec[r])
    {
      s++;
    }
    else
    {
      if (!flag)
      {
        if (vec[l] <= vec[r] * x)
        {
          s++;
          flag = true;
        }
      }
      else
      {
        final = max(s, final);
        s = 0;
        flag = false;
        l = r;
        r++;
        continue;
      }
    }
    l++;
    r++;
  }
  cout << final << endl;
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
