#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
  cin >> n;
  vec.resize(n);

  for (int i = 0; i < n; i++)
    cin >> vec[i];
}

void solve()
{
  input();

  for (int j = 0; j < n; j++)
  {
    int bit_of_i = 0;
    for (int i = 0; i < 31; i++)
    {
      if (((j + 1) >> i) & 1)
        bit_of_i++;
    }
    int bit_of_number = 0;
    for (int i = 0; i < 31; i++)
    {
      if (((vec[j]) >> i) & 1)
        bit_of_number++;
    }

    if (bit_of_number > bit_of_i)
    {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
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
