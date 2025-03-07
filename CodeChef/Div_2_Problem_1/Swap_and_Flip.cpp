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
    string str;
    cin >> str;
    string st;
    cin >> st;
    int zero = count(str.begin(), str.end(), '0');
    int one = count(str.begin(), str.end(), '1');
    int zero_2 = count(st.begin(), st.end(), '0');
    int one_2 = count(st.begin(), st.end(), '1');

    if (one % 2 == one_2 % 2)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}