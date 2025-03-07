#include <bits/stdc++.h>
using namespace std;

int n;
string st;
string str;

void input()
{
  cin >> n;
  cin >> st >> str;
}

void solve()
{
  input();
  int s = 0;

  int one = count(st.begin(), st.end(), '1');
  int one_2 = count(str.begin(), str.end(), '1');

  if (one % 2 == 1 || one_2 % 2 == 1)
    cout << "YES" << endl;

  else if (one % 2 == 0 && one_2 % 2 == 0)
  {
    for (int i = 0; i < n; i++)
    {
      if (str[i] != st[i])
      {
        cout << "YES" << endl;
        return;
      }
    }
    cout << "NO" << endl;
    return;
  }
  else
    cout << "NO" << endl;
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
