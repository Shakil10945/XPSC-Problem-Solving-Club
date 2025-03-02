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
    string st;
    cin >> st;
    int a = count(st.begin(), st.end(), 'A');
    int b = count(st.begin(), st.end(), 'B');

    if (a > b)
      cout << "A" << endl;
    else
      cout << "B" << endl;
  }

  return 0;
}