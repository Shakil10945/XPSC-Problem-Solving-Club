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
    /* code */
    string str;
    cin >> str;

    cout << count(str.begin(), str.end(), '1') << endl;
  }

  return 0;
}